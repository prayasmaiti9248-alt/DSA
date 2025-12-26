class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=0;
        int minp=penalty;
        int mini=0;
        for(int i=1;i<=customers.size();i++){
            int y;
            if(customers[i-1]=='Y'){
                y=1;
            }
            else{
                y=-1;
            }
            penalty-=y;
            if(minp>penalty){
                minp=penalty;
                mini=i;
            }
        }
        return mini;
    }
};