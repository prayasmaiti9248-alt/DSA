class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        int diff;
        int count=0;
        for(int i=0;i<nums.size();++i){
           sum+=nums[i]; 
        }
       int  ls=0;
        for(int i=0;i<nums.size()-1;i++){
            ls+=nums[i];
            sum-=nums[i];
            diff=abs(ls-sum);
            if(diff%2==0)
            count++;
        }
        return count;
    }
};