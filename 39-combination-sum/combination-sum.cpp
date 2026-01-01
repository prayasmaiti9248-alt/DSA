class Solution {
public:
set<vector<int>> s;
void comb(vector<int>& candidates, int target,int idx,vector<int> &combine, vector<vector<int>> &ans){
    if(idx>=candidates.size() || target<0){
     return;
    }
    if(target==0){
        if(s.find(combine)==s.end()){
           ans.push_back(combine);
           s.insert(combine);
        }
    return;

    }
    combine.push_back(candidates[idx]);
    comb(candidates,target-candidates[idx],idx,combine,ans);
    comb(candidates,target-candidates[idx],idx+1,combine,ans);
    combine.pop_back();
    comb(candidates,target,idx+1,combine,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combine;
        comb(candidates,target,0,combine,ans);
        return ans;
    }
};