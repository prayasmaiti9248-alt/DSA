class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int eb=numBottles;
        int ans=numBottles;
        while(eb>=numExchange){
            int cb=eb/numExchange;
            eb-=cb*numExchange;
            ans+=cb;
            eb+=cb;
        }
        return ans;
    }
};