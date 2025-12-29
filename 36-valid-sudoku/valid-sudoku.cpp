class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=0;
        int col=0;
        while(row<9){
            if(col==9){
                row++;
                col=0;
                continue;
            }
            char dig=board[row][col];
            if(dig=='.'){
                col++;
                continue;
            }
            for(int i=0;i<9;i++){
                if(i==col)
                continue;
                if(board[row][i]==dig)
                return false;
            }
            for(int i=0;i<9;i++){
                if(i==row)
                continue;
                if(board[i][col]==dig)
                return false;
            }
            int srow=(row/3)*3;
            int scol=(col/3)*3;
            for(int i=srow;i<=srow+2;i++){
                for(int j=scol;j<=scol+2;j++){
                    if(i==row && j==col)
                    continue;
                    if(board[i][j]==dig)
                    return false;
                }
            }
            col++;
        }
       return true; 
    }
};