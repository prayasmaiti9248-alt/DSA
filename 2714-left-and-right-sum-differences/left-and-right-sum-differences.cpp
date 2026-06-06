class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int> ls;
       vector<int> rs;
       vector<int> ans;
       int sum=0;
       for(int i=0;i<nums.size();i++){
        ls.push_back(sum);
        sum+=nums[i];
       } 
       sum=0;
       for(int i=nums.size()-1;i>=0;i--){
        rs.insert(rs.begin(),sum);
        sum+=nums[i];
       } 
       for(int i=0;i<ls.size();i++){
        ans.push_back(abs(ls[i]-rs[i]));
       }
       return ans;
    }
};