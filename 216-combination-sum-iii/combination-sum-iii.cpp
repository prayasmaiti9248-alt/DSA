class Solution {
public:
void comb(int i,int b,int k,int sum,int n, vector<int> &temp, vector<vector<int>> &ans){
    if(i==10||b==k){
        if(sum==n&&b==k){
            ans.push_back(temp);
        }
        return;
    }
    sum+=i;
    temp.push_back(i);
    comb(i+1,b+1,k,sum,n,temp,ans);
    temp.pop_back();
    sum-=i;
    comb(i+1,b,k,sum,n,temp,ans);
    
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        comb(1,0,k,0,n,temp,ans);
        return ans;
    }
};