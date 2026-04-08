class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int mod=1e9+7;
        for(int i=0;i<queries.size();i++){
            int idx=queries[i][0];
            while(idx<=queries[i][1]){
                if(idx<nums.size()){
                nums[idx]=(1ll*nums[idx]*queries[i][3])%mod;
                }
                if(queries[i][2]==0)continue;
                idx+=queries[i][2];
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};