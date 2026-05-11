class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int> temp;
            if(n==0){
                ans.push_back(0);
            }
            while(n>0){
                int r=n%10;
                n=n/10;
                temp.insert(temp.begin(),r);
            }
            for(int j=0;j<temp.size();j++){
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};