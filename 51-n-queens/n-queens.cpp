class Solution {
public:
bool issafe(vector<string> &board,int j,int row,int n){
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }
    for(int i=0;i<n;i++){
        if(board[i][j]=='Q')
        return false;
    }
    for(int i=row,k=j;i>=0 && k>=0;i--,k--){
        if(board[i][k]=='Q')
        return false;
    }
    for(int i=row,k=j;i>=0 && k<n;i--,k++){
        if(board[i][k]=='Q')
        return false;
    }
    return true;
}
void nqueens(vector<string> &board,vector<vector<string>> &ans,int row,int n){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int j=0;j<n;j++){
        if(issafe(board,j,row,n)){
        board[row][j]='Q';
        nqueens(board,ans,row+1,n);
        board[row][j]='.';
        }


    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        nqueens(board,ans,0,n);
        return ans;
    }
};