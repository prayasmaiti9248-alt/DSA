class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
            if(m[nums[i]].size()>=3){
                vector<int> &p=m[nums[i]];
                int j=p.size()-3;
                int ans=2*(i-p[j]);
                res=min(res,ans);
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};