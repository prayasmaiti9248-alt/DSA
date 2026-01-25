class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      int ans=INT_MAX;
      if(k<2){
        return 0;
      }
      sort(nums.begin(),nums.end());
      int t=k-1;
      int i=0;
      while(i<=nums.size()-k){
        int dif=abs(nums[i]-nums[t]);
        ans=min(ans,dif);
        i++;
        t++;

      }
   
    return ans;
    }
};