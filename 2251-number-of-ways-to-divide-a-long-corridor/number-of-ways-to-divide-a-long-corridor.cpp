class Solution {
public:
    int numberOfWays(string corridor) {
        const int m=1e9+7;
        vector<int> seat;
        for(int i=0;i<corridor.length();i++){
            if(corridor[i]=='S')
            seat.push_back(i);
        }
        if(seat.size()==0||seat.size()%2!=0)
        return 0;
        long res=1;
        for(int i=2;i<seat.size();i+=2){
            res=(res*(seat[i]-seat[i-1]))%m;
        }
       return res; 
    }
};