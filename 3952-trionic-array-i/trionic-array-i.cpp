class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0;
        int q=0;
        if(nums[0]>=nums[1]){
            return false;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                p=i;
                break;
            }
        }
        if(p==0){
            return false;
        }
        for(int i=p;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                q=i;
                break;
            }
        }
        if(q==0){
            return false;
        }
        for(int i=q;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                return false;
            }
        }
        return true;
    }
};