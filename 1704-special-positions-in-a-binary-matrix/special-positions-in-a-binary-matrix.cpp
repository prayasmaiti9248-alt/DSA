class Solution {
public:
bool check(int i,int j,vector<vector<int>>& mat){
    for(int t=0;t<mat.size();t++){
        if(mat[t][j]==1 && t!=i){
            return false;
        }
    }
    for(int t=0;t<mat[0].size();t++){
        if(mat[i][t]==1 && t!=j){
            return false;
        }
    }
    return true;

}
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
     for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1){
                if(check(i,j,mat)){
                    ans++;
                }
            }
        }
     }  
     return ans; 
    }
};