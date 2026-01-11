class Solution {
public:
bool isvalid(vector<vector<int>>& grid,int i,int j,int n,int exv){
    if(i<0||j<0||i>=n||j>=n||grid[i][j]!=exv){
        return false;
    }
    if(exv==(n*n-1)){
        return true;
    }
    int ans1=isvalid(grid,i-2,j-1,grid.size(),exv+1);
    int ans2=isvalid(grid,i-1,j-2,grid.size(),exv+1);
    int ans3=isvalid(grid,i+2,j-1,grid.size(),exv+1);
    int ans4=isvalid(grid,i+1,j-2,grid.size(),exv+1);
    int ans5=isvalid(grid,i-2,j+1,grid.size(),exv+1);
    int ans6=isvalid(grid,i-1,j+2,grid.size(),exv+1);
    int ans7=isvalid(grid,i+2,j+1,grid.size(),exv+1);
    int ans8=isvalid(grid,i+1,j+2,grid.size(),exv+1);
    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
}
    bool checkValidGrid(vector<vector<int>>& grid) {
      return isvalid(grid,0,0,grid.size(),0);  
    }
};