class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans;
        int p=1;
        int l=k;
        while(true){
            l=k*p;
            if(m.find(l)==m.end()){
                ans=l;
                break;
            }
            p++;
        }
        return ans;
    }
};