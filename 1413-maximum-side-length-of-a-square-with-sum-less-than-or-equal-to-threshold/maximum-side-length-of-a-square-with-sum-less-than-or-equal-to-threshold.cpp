class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> p(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                p[i][j]=mat[i-1][j-1]+p[i][j-1]+p[i-1][j]-p[i-1][j-1];
            }
        }
        int s=min(m,n);
        int pr=0;
        int ans=0;
        while(pr<=s){
            int mid=(pr+s)/2;
            bool ok=false;
            for(int r=0;r+mid<=n;r++){
                for(int j=0;j+mid<=m;j++){
                   int sum = p[r+mid][j+mid]
                            - p[r][j+mid]
                            - p[r+mid][j]
                            + p[r][j];
                    if(sum<=threshold){
                        ok=true;
                    }
        }
            }
            if(ok){
                ans=mid;
                pr=mid+1;
            }
            else{
                s=mid-1;
            }
        }
       
        return ans;
    }
};