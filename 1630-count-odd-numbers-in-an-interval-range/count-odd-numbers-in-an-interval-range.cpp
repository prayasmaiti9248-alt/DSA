class Solution {
public:
    int countOdds(int low, int high) {
        int n=high-low;
        if(low%2!=0||high%2!=0){
            n=(n/2)+1;
        }
        else
        n=n/2;
        return n;
        
    }
};