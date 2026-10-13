class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> pos;
        int i=0,j=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    pos.push_back({i,j});
                }
            }
        }
        for(int i=0;i<pos.size();i++){
            int m=pos[i][0];
            int n=pos[i][1];
            for(int j=0;j<matrix.size();j++){
                matrix[j][n]=0;
            }
            for(int j=0;j<matrix[0].size();j++){
                matrix[m][j]=0;
            }
        }
    

    }
};