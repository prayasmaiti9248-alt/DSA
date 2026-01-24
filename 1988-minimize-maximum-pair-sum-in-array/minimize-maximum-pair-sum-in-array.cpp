class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int t=nums[i]+nums[j];
            ans=max(ans,t);
            i++;
            j--;
        }
        return ans;
    }
};