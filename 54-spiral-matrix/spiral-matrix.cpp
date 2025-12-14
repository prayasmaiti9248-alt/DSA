class Solution {
public:
vector<int> spiral(vector<vector<int>> m){
    vector<int> a;
    int srow=0;
    int scol=0;
    int erow=m.size()-1;
    int ecol=m[0].size()-1;
    while(srow<=erow && scol<=ecol){
        for(int i=scol;i<=ecol;i++){
            a.push_back(m[srow][i]);
        }
        for(int i=srow+1;i<=erow;i++){
            a.push_back(m[i][ecol]);
        }
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow){
                break;
            }
            a.push_back(m[erow][i]);
        }
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            a.push_back(m[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    return a;
}
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans=spiral(matrix);
        return ans;
        }
};