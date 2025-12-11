class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=n-1;
        while(s<m&&e>=0){
            if(matrix[s][e]==target)
            return true;
            else if(target<matrix[s][e])
            e--;
            else
            s++;
        }
        return false;
    }
};