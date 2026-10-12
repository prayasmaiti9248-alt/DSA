class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD=1e9+7;
        int bc[31]={};
        for(int i=0;i<nums.size();i++){
            for(int b=0;b<31;b++){
                if((nums[i]>>b)&1){
                    bc[b]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<k;i++){
            long long val=0;
            for(int b=0;b<31;b++){
                if(bc[b]>i){
                    val |= (1LL << b);
                }
            }
            ans=(ans+val*val%MOD)%MOD;
        }
        return ans;
    }
};