class Solution {
public:
bool check(vector<vector<int>>& grid){
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==0){
                return false;
            }
        }
    }
    return true;
}
void walk(vector<vector<int>>& grid,int r,int c,int &ans){
    int n=grid.size();
    int m=grid[0].size();
    if(r<0 || r>=n || c<0 || c>=m){
        return;
    }
    if(grid[r][c]==-1){
        return;
    }
    if(grid[r][c]==2){
        if(check(grid)){
            ans++;
            return;
        }
    }
    int temp=grid[r][c];
    grid[r][c]=-1;
    //up
    walk(grid,r-1,c,ans);
    //down
    walk(grid,r+1,c,ans);
    //left
    walk(grid,r,c-1,ans);
    //right
    walk(grid,r,c+1,ans);
    grid[r][c]=temp;
}
    int uniquePathsIII(vector<vector<int>>& grid) {
       int ans=0;
       int r=0,c=0;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1){
                r=i;
                c=j;
                break;
            }
        }
       }
       walk(grid,r,c,ans); 
       return ans;
    }
};