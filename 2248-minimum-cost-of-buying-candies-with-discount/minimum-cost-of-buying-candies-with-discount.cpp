class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.begin(),cost.end());
       int n=cost.size()-1;
       int t=0;
       int c=0;
       for(int i=n;i>=0;i--){
        t++;
        if(t%3!=0){
            c+=cost[i];
        }
       } 
       return c;
    }
};