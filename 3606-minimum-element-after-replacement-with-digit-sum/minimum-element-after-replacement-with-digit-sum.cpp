class Solution {
public:
    int minElement(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                int r=n%10;
                sum+=r;
                n/=10;

            }
            nums[i]=sum;
            m=min(nums[i],m);
        }
        return m;
    }
};