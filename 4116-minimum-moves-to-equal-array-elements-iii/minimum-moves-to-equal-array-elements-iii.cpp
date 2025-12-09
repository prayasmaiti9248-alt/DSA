class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int k=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            ans+=(k-nums[i]);
        }
        return ans;
    }
};