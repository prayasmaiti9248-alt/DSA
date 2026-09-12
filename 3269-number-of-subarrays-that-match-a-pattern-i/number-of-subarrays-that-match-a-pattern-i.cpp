class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int w=pattern.size();
        int ans=0;
        for(int i=0;i+w<nums.size();i++){
            int t=0;
            for(int j=0;j<pattern.size();j++){
                if(pattern[j]==1){
                    if(nums[i+j+1]<=nums[i+j]){
                        t=1;
                    }
                }
                if(pattern[j]==0){
                    if(nums[i + j + 1] != nums[i + j]){
                        t=1;
                    }
                }
                if(pattern[j]==-1){
                    if(nums[i + j + 1] >= nums[i + j]){
                        t=1;
                    }
                }
            }
            if(t==0){
                ans++;
            }
        }
        return ans;
    }
};