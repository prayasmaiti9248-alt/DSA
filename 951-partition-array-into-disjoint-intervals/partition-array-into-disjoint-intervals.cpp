class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
       int lmax=nums[0];
       int maxi=nums[0];
       int ans=1;
       for(int i=1;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
        if(nums[i]<lmax){
            ans=i+1;
            lmax=maxi;
        }
       }
        return ans;
    }
};