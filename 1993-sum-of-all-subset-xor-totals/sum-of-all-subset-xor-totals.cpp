class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
            sum|=num;
        }
        return sum*(1<<(nums.size()-1));
    }
};