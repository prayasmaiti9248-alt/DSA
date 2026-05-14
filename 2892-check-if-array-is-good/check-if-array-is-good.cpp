class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map <int,int> m;
        int mx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(nums[i]!=mx&&m[nums[i]]>=2){
                return false;
            }
            if(nums[i]>nums.size()-1){
                return false;
            }
        }
        if(m[mx]==2&&mx==nums.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};