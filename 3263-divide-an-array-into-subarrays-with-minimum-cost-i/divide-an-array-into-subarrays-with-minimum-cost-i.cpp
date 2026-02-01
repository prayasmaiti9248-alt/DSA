class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        int min=INT_MAX;
        int pos1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
                pos1=i;
            }
        }
        ans+=min;
        min=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=min && pos1!=i){
                min=nums[i];
            }
        }
        ans+=min;
        return ans;
    }
};