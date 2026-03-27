class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat[0].size()-1;
        vector<vector<int>> org;
        org=mat;
        for(int l=0;l<k;l++){
        for(int i=0;i<mat.size();i++){
                if(i%2==0){
                    mat[i].push_back(mat[i][0]);
                    mat[i].erase(mat[i].begin());
                }
                else{
                    mat[i].insert(mat[i].begin(),mat[i][m]);
                    mat[i].pop_back();
                }
        }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=org[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};