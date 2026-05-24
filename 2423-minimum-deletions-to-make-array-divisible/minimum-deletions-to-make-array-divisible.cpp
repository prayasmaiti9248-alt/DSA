class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int d=numsDivide[0];
        for(int i=0;i<numsDivide.size();i++){
            d=gcd(d,numsDivide[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(d%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};