class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        for(int i=n;i<=n*t;i++){
            int tp=i;
            int p=1;
            while(tp>0){
                int r=tp%10;
                p*=r;
                tp/=10;
            }
            if(p%t==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};