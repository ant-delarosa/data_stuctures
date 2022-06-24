# Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

#     Each row must contain the digits 1-9 without repetition.
#     Each column must contain the digits 1-9 without repetition.
#     Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int i, j;
        
        //board[0].size=9
        //check rows
        for (i=0; i<9; i++){
            set<char> myset1;
            
            for (j=0; j<9; j++){
                if (myset1.count(board[i][j])){
                    return false;
                }
        
                if (&board[i][j]!="."){
                    myset1.insert(board[i][j]);
                }
            }
        }
        
        
        //check columns
        
        for (i=0; i<9; i++){
            set<char> myset1;
            
            for (j=0; j<9; j++){
                if (myset1.count(board[j][i])){
                    return false;
                }
        
                if (&board[j][i]!="."){
                    myset1.insert(board[j][i]);
                }
            }
        }
        
        //check sub arrays

        
        //0
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i][j])){
                    return false;
                }
        
                if (&board[i][j]!="."){
                    myset1.insert(board[i][j]);
                }
            }
        }
        
                
        //1
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i][j+3])){
                    return false;
                }
        
                if (&board[i][j+3]!="."){
                    myset1.insert(board[i][j+3]);
                }
            }
        }
        
                
        //2
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i][j+6])){
                    return false;
                }
        
                if (&board[i][j+6]!="."){
                    myset1.insert(board[i][j+6]);
                }
            }
        }
        
                
        //3
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+3][j])){
                    return false;
                }
        
                if (&board[i+3][j]!="."){
                    myset1.insert(board[i+3][j]);
                }
            }
        }
        
                
        //4
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+3][j+3])){
                    return false;
                }
        
                if (&board[i+3][j+3]!="."){
                    myset1.insert(board[i+3][j+3]);
                }
            }
        }
        
                
        //5
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+3][j+6])){
                    return false;
                }
        
                if (&board[i+3][j+6]!="."){
                    myset1.insert(board[i+3][j+6]);
                }
            }
        }
        
                
        //6
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+6][j])){
                    return false;
                }
        
                if (&board[i+6][j]!="."){
                    myset1.insert(board[i+6][j]);
                }
            }
        }
        
                
        //7
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+6][j+3])){
                    return false;
                }
        
                if (&board[i+6][j+3]!="."){
                    myset1.insert(board[i+6][j+3]);
                }
            }
        }
        
                
        //8
        for (i=0; i<3; i++){
            set<char> myset1;
            
            for (j=0; j<3; j++){
                if (myset1.count(board[i+6][j+6])){
                    return false;
                }
        
                if (&board[i+6][j+6]!="."){
                    myset1.insert(board[i+6][j+6]);
                }
            }
        }
        
        
        
        
        return true;
    }
};
