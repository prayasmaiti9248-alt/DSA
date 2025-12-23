class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x,y;
        for(int i=0;i<nums.size();i++){
            if(i<n){
                x.push_back(nums[i]);
            }
            else{
                y.push_back(nums[i]);
            }
        }
        int t=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=x[t];
                t++;
            }
            else{
                nums[i]=y[s];
                s++;
            }

        }
        return nums;
    }
};