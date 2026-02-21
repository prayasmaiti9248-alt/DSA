class Solution {
public:
bool isPrime(int c){
    if(c<2){
        return false;
    }
    if(c==2){
        return true;
    }
    for(int i=2;i<c;i++){
        if(c%i==0){
            return false;
        }
    }
    return true;
}
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int count = __builtin_popcount(i);
            if(isPrime(count)){
                ans++;
            }
        }
        return ans;
    }
};