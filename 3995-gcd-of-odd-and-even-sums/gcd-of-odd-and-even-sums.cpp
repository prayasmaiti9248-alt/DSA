class Solution {
public:
int gcd(int o,int e){
    int d=min(o,e);
    for(int i=d;i>=1;i--){
        if(o%i==0&&e%i==0){
            d=i;
            break;
        }
    }
    return d;
}
    int gcdOfOddEvenSums(int n) {
        int o=1;
        int e=2;
        int es=0;
        int os=0;
        for(int i=0;i<n;i++){
            es+=e;
            os+=o;
            e+=2;
            o+=2;
        }
        int ans=gcd(os,es);
        return ans;
    }
};