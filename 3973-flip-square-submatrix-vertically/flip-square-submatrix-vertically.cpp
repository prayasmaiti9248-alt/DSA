class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int i=x;
        int j=y;
        int p=i+k-1;
        int s=j+k-1;
        while(p>i){
            for(int h=j;h<=s;h++){
                swap(grid[i][h],grid[p][h]);
            }
            p--;
            i++;
        }
        return grid;
    }
};