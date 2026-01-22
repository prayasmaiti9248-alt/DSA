class Solution {
public:
bool isok(vector<int>& nums,int n){
    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            return false;
         }
    }
    return true;
}
    int minimumPairRemoval(vector<int>& nums) {
        int ans=0,n=nums.size();
        while(!isok(nums,n)){
            ans+=1;
            int msum=INT_MAX,mindex=-1;
        for(int i=1;i<nums.size();i++){
            int sum=nums[i]+nums[i-1];
            if(sum<msum){
                mindex=i-1;
                msum=sum;
            }
        }
        nums[mindex]=msum;
        nums.erase(nums.begin()+mindex+1);
        n--;
        }
        return ans;
    }
};