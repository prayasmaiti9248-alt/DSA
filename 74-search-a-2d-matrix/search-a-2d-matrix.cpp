class Solution {
public:
bool row_search(vector<vector<int>> matrix,int target,int r){
    int s=0;
    int e=matrix[r].size()-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(matrix[r][m]==target)
        return true;
        else if(target>matrix[r][m])
        s=m+1;
        else
        e=m-1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int e=matrix.size()-1;
        int n=matrix[0].size();
        while(s<=e){
            int m=s+(e-s)/2;
            if(target>=matrix[m][0]&&target<=matrix[m][n-1]){
                return row_search(matrix,target,m);
            }
            else if(target>matrix[m][n-1]){
                s=m+1;
            }
            else if(target<matrix[m][0]){
                e=m-1;
            }
        }
        return false;
    }
};