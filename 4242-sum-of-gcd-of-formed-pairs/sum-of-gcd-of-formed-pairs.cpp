class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=nums[0];
        vector<int> pg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
            int g=gcd(nums[i],mx);
            pg.push_back(g);

        }
        sort(pg.begin(),pg.end());
        int i=0;
        int j=pg.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(pg[i],pg[j]);
            i++;
            j--;
        }
        return sum;
    }
};