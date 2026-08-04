class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(nums[i]>mx){
                mx=nums[i];
            }
            if(nums[i]<mn){
                mn=nums[i];
            }
        }
        for(int i=mn;i<=mx;i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};