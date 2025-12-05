class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> ans2;
        vector<int> ans1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<pivot){
                ans1.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
            else
            ans2.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<ans1.size();i++){
            nums.push_back(ans1[i]);
        }
        for(int i=0;i<ans2.size();i++){
            nums.push_back(ans2[i]);
        }
        for(int i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
       return nums;
    }
};