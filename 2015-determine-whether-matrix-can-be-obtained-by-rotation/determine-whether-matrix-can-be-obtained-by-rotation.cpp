class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& tar) {
        int n=mat.size()-1;
        bool ans=true;
        //r0check
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=tar[i][j]){
                    ans=false;
                    break;
                }
            }
        }
        if(ans==true){
            return true;
        }
        ans=true;
       //r1check 
       int t=n;
       for(int i=0;i<mat.size();i++){
        t=n;
        for(int j=0;j<mat.size();j++){
           if(mat[t][i]!=tar[i][j]){
            ans=false;
            break;
           }
            t--;
        }
       }
       if(ans==true){
        return true;
       }
       ans=true;
       //r2check
       t=n;
       for(int i=0;i<mat.size();i++){
        int l=n;
        for(int j=0;j<mat.size();j++){
            if(mat[t][l]!=tar[i][j]){
                ans=false;
                break;
            }
            l--;
        }
        t--;
       }
       if(ans==true){
        return true;
       }
       ans=true;
       //r3check
       t=n;
       for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat.size();j++){
            if(mat[j][t]!=tar[i][j]){
                ans=false;
                break;
            }
        }
        t--;
       }
       return ans;
    }
};