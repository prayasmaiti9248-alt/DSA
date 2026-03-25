class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
       uint64_t sum=0;
       uint64_t temp;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            sum+=grid[i][j];
        }
       } 
       //verticalcheck
       temp=sum;
       uint64_t vs=0;
       for(int i=0;i<grid[0].size();i++){
        for(int j=0;j<grid.size();j++){
            temp-=grid[j][i];
            vs+=grid[j][i];
        }
        if(temp==vs){
            return true;
        }
       }
       //horizontalcheck
       uint64_t hs=0;
       temp=sum;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            hs+=grid[i][j];
            temp-=grid[i][j];
        }
        if(temp==hs){
            return true;
        }
       }
       return false;
    }
};