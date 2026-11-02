class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mean;
        int t;
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        mean=nums[n/2];
        for(int j=0;j<nums.size();j++){
            t=abs(mean-nums[j]);
            ans+=t;
        }
        return ans;
    }
};