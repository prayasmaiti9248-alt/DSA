class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int res=INT_MAX;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    for(int k=j+1;k<nums.size();k++){
                        if(nums[j]==nums[k]){
                            ans=abs(i-j)+abs(k-i)+abs(j-k);
                            res=min(ans,res);
                        }
                    }
                }
            }
            //res=min(ans,res);
        }
        if(res==INT_MAX){
             return -1;
         }
        return res;
    }
};