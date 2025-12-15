class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> p(nums.size(),0);
        p[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            p[i]=p[i-1]+nums[i];
        } 
        m[0]=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int val=p[i]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            m[p[i]]++;
        }
        return count;
    }
};