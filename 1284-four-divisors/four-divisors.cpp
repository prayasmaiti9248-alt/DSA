class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            //vector<int> t;
            int count=1;
            int s=0;
            //t.push_back(nums[i]);
            for(int j=1;j<=nums[i]/2;j++){
                if(nums[i]%j==0){
                   // t.push_back(j);
                   count++;
                    s+=j;
                }
                if(count>4){
                    break;
                }
            }
            if(count==4){
                ans+=s+nums[i];
            }
        }
        return ans;
    }
};