class Solution {
public:
    int longestBalanced(vector<int>& nums) {
       int maxi=0;
       for(int i=0;i<nums.size();i++){
        int o=0;
        int e=0;
        unordered_map<int,int> m;
        m[nums[i]]+=1;
        if(nums[i]%2==0){
            e++;
        }
        else{
            o++;
        }
        for(int j=i+1;j<nums.size();j++){
            m[nums[j]]+=1;
            if(m[nums[j]]==1){
                if(nums[j]%2==0){
                    e++;
                }
                else{
                    o++;
                }
            }
            if(e==o){
                maxi=max(maxi,(j-i+1));
            }
        }
       } 
       return maxi;
    }
};