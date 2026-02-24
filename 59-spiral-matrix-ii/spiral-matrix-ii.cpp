class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int sr=0,sc=0;
        int er=n-1,ec=n-1;
        int s=0;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++){
                ans[sr][i]=++s;
            }
            for(int i=sr+1;i<=er;i++){
                ans[i][ec]=++s;
            }
            if(sr<er && sc<ec){
                for(int i=ec-1;i>sc;i--){
                    ans[er][i]=++s;
                }
                for(int i=er;i>sr;i--){
                    ans[i][sc]=++s;
                }
            }
            sr++;
            sc++;
            er--;
            ec--;
        }
        return ans;

    }
};