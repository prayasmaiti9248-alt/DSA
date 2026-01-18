class Solution {
public:
bool ismagic(vector<vector<int>>& grid,int r,int c,int size){
    int sum=0;
  for(int i=0;i<size;i++){
    sum+=grid[r][c+i];
  }
  int d1=0;
  int d2=0;
  int j2=r+size-1;
  for(int i=0;i<size;i++){
    d1+=grid[r+i][c+i];
    d2+=grid[j2][c+i];
    j2--;
  }
  if(d1!=sum||d2!=sum){
    return false;
  }
  for(int i=0;i<size;i++){
    int rsum=0;
    for(int j=0;j<size;j++){
        rsum+=grid[r+i][c+j];
    }
    if(rsum!=sum){
        return false;
    }
  }
  for(int i=0;i<size;i++){
    int csum=0;
    for(int j=0;j<size;j++){
        csum+=grid[r+j][c+i];
    }
    if(csum!=sum){
        return false;
    }
  }
  return true;
}
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int s=min(m,n);
        for(int size=s;s>=2;size--){
            for(int r=0;r+size-1<m;r++){
                for(int c=0;c+size-1<n;c++){
                    if(ismagic(grid,r,c,size)){
                        return size;
                    }
                }
            }
        }
        return 1;
    }
};