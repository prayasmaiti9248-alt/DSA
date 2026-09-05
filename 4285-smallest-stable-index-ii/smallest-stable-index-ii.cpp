class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mx;
        vector<int> mn;
        int m=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m){
                m=nums[i];
            }
            mx.push_back(m);
        }
        int t=nums.size()-1;
        int n=nums[t];
        for(int i=t;i>=0;i--){
            if(nums[i]<n){
                n=nums[i];
            }
            mn.push_back(n);
        }
        reverse(mn.begin(),mn.end());
        for(int i=0;i<mx.size();i++){
            if(mx[i]-mn[i]<=k){
                return i;
            }
        }
        return -1;
    }
};