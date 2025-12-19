class Solution {
public:
void get_sub(vector<vector<int>> &res,vector<int> &ans,int i,vector<int> &nums){
    if (i==nums.size()){
        res.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    get_sub(res,ans,i+1,nums);
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1])
    idx++;
    get_sub(res,ans,idx,nums);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        get_sub(res,ans,0,nums);
        return res;
    }
};