class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int n=happiness.size()-1;
        long long h=0;
        int t=0;
        for(int i=k;i>0;i--){
            if((happiness[n]-t)>0){
             h+=happiness[n]-t;
             t++;
             n--;
            }


        }
        return h;
    }
};