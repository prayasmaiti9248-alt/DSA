class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p;
        int max=0;
        for(int i=0;i<nums.size();++i){
            for(int j=0;j<nums.size();++j){
                p=(nums[i]-1)*(nums[j]-1);
                if(p>max&&i!=j)
                max=p;

            }
        }
        return max;
    }
};