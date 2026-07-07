class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
        while(n>0){
            int r=n%10;
            if(r!=0){
             x=x*10+r;
             sum+=r;
            }
            n=n/10;
        }
        long long x1=0;
        while(x>0){
            int r=x%10;
            x1=x1*10+r;
            x=x/10;
        }
        return sum*x1;
    }
};