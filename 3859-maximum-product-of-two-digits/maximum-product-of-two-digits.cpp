class Solution {
public:
    int maxProduct(int n) {
        int mx1,mx2;
        mx1=0;
        mx2=0;
        while(n>0){
            int r=n%10;
            if(r>mx1){
                mx2=mx1;
                mx1=r;
            }
            else if(r>mx2){
                mx2=r;
            }
            n/=10;
        }
        return mx1*mx2;
    }
};