class Solution:
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
            
        
        
        
        
        
        
        return True
