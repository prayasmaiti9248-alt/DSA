class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0;
        int ans=-1;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum==coins){
                ans=i+1;
                break;
            }
            if(sum>coins){
                ans=i;
                break;
            }
        }
        if(ans==-1){
            return (int)costs.size();
        }
        return ans;
    }
};