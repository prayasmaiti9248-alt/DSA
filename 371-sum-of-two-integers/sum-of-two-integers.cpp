class Solution {
public:
    int getSum(int a, int b) {
        int s=a;
        while(b!=0){
            if(b<0){
                s--;
                b++;
            }
            else{
                s++;
                b--;
            }
        }
        return s;
        
    }
};