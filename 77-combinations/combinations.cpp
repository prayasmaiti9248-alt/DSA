class Solution {
public:
void helper(int start,vector<vector<int>> &res,vector<int> &com,int n,int k){
    if(com.size()==k){
        res.push_back(com);
        return;
    }
    for(int i=start;i<=n;i++){
        com.push_back(i);
        helper(i+1,res,com,n,k);
        com.pop_back();
    }


}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> com;
        helper(1,res,com,n,k); 
        return res;
    }
}; 