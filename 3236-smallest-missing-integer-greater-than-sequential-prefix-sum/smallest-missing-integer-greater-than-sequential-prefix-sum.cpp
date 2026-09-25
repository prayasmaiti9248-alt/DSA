class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ls=nums[0];
        unordered_map<int,int>m;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]-1){
             ls+=nums[i];
            }
            else{
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=ls;i<INT_MAX;i++){
            if(m.find(i)==m.end()){
                ls=i;
                break;
            }
        }
        return ls;
    }
};