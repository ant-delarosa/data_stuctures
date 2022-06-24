# Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

#     Each row must contain the digits 1-9 without repetition.
#     Each column must contain the digits 1-9 without repetition.
#     Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        #check rows
        for item in board:
            listnum=[]
            for item2 in item:
                
                if item2 in listnum:
                    return False
                if item2!=".":
                    listnum.append(item2)

        
        #check columns
        for i in range(0, len(board[0])):
            
            listnum=[]
            for item in board:
                
                if item[i] in listnum:
                    return False
                if item[i]!=".":
                    listnum.append(item[i])
          
        
        #check every 3x3 sub array
         #0   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j][k] in listnum:
                    return False
                if board[j][k]!=".":
                    listnum.append(board[j][k])
                    
                    
        #1   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j][k+3] in listnum:
                    return False
                if board[j][k+3]!=".":
                    listnum.append(board[j][k+3])

        #2   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j][k+6] in listnum:
                    return False
                if board[j][k+6]!=".":
                    listnum.append(board[j][k+6])
                    
                    
        #3   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+3][k] in listnum:
                    return False
                if board[j+3][k]!=".":
                    listnum.append(board[j+3][k])
                    
                    
        #4   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+3][k+3] in listnum:
                    return False
                if board[j+3][k+3]!=".":
                    listnum.append(board[j+3][k+3])
                    
        #5
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+3][k+6] in listnum:
                    return False
                if board[j+3][k+6]!=".":
                    listnum.append(board[j+3][k+6])
                    
        #6   
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+6][k] in listnum:
                    return False
                if board[j+6][k]!=".":
                    listnum.append(board[j+6][k])
                    
                    
        #7
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+6][k+3] in listnum:
                    return False
                if board[j+6][k+3]!=".":
                    listnum.append(board[j+6][k+3])
                    
        
        #8
        listnum=[]
        for j in range(0, 3):
                    
            for k in range(0, 3):
                        
                if board[j+6][k+6] in listnum:
                    return False
                if board[j+6][k+6]!=".":
                    listnum.append(board[j+6][k+6])
        
    
    
        return True
    
    #same solution (my solution) with less code
    class Solution2:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for item in board:
            listnum=[]
            for item2 in item:
                
                if item2 in listnum:
                    return False
                if item2!=".":
                    listnum.append(item2)

        
        for i in range(0, len(board[0])):
            
            listnum=[]
            for item in board:
                
                if item[i] in listnum:
                    return False
                if item[i]!=".":
                    listnum.append(item[i])
         
        
        def checkSub(board2: List[List[str]], row1, col1):
            listnum2=[]
            for j in range(0, 3):

                for k in range(0, 3):

                    if board2[j+row1][k+col1] in listnum2:
                        return False
                    if board2[j+row1][k+col1]!=".":
                        listnum2.append(board2[j+row1][k+col1])
            
            return True
              
    
        sub0= checkSub(board, 0, 0)
        sub1= checkSub(board, 0, 3)
        sub2= checkSub(board, 0, 6)
        sub3= checkSub(board, 3, 0)
        sub4= checkSub(board, 3, 3)
        sub5= checkSub(board, 3, 6)
        sub6= checkSub(board, 6, 0)
        sub7= checkSub(board, 6, 3)
        sub8= checkSub(board, 6, 6)
        
        if (not sub0 or not sub1 or not sub2 or not sub3 or not sub4 or not sub5 or not sub6 or not sub7 or not sub8):
            return False

    
        return True
            
    
    #other solution, less code
    class Solution2:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        #do all false checks with board loop for row/col
        #box check double for loops
        cols = collections.defaultdict(set)
        rows = collections.defaultdict(set)
        squares = collections.defaultdict(set) #key = r/3, c/3
        
        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue
                if (board[r][c] in rows[r] or board[r][c] in cols[c] or board[r][c] in squares[(r//3,c//3)]):
                    return False 
                cols[c].add(board[r][c])
                rows[r].add(board[r][c])
                squares[r//3, c//3].add(board[r][c]) #key is tuple 
                
        return True 
