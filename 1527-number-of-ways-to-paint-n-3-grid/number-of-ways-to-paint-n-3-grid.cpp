class Solution {
public:
    int numOfWays(int n) {
       const int mod=1000000007;
       long long a=6;
       long long b=6;
       for(int i=2;i<=n;i++){
        long long a1=(2*a+2*b)%mod;
        long long b1=(2*a+3*b)%mod;
        a=a1;
        b=b1;
       } 
       return ((a+b)%mod);
    }
};