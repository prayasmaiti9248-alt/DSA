class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        long long res = LLONG_MIN;
        int i = 1;
        while(i<n)
        {
            long long curr = 0;
            while(i<n && nums[i]<=nums[i-1]) i++; 
            if(i>=n) continue;
            while(i<n && nums[i]>nums[i-1]) 
            {
                while(i<n && nums[i]>nums[i-1] && nums[i]<=0)i++;
                if(i>=n)break;
                if(nums[i]>nums[i-1])
                {
                    if(nums[i-1]>0)curr+=nums[i-1];
                    while(i<n && nums[i]>nums[i-1]) curr+=nums[i++];
                    if(i>=n)break;
                }
                else curr+=nums[i-1]+nums[i-2]; 
            }
            if(i>=n)continue;
            if(nums[i-1]>0 && nums[i-2]<=0) curr=nums[i-1]+nums[i-2];
            if(nums[i]==nums[i-1])continue; 
            while(i<n && nums[i]<nums[i-1]) 
            {
                curr+=nums[i];
                i++;
            }
            if(i>=n)continue;
            if(nums[i]==nums[i-1])continue; 
            int st = i;
            long long tempmax = LLONG_MIN, tempcurr = 0;
            while(i<n && nums[i]>nums[i-1])
            {
                tempcurr += nums[i];
                tempmax = max(tempmax,tempcurr);
                i++;
            }
            curr+=tempmax;
            i=st; 
            res = max(curr,res);
        }
        return res;
    }
};