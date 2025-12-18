class Solution {
public:
bool isprime(int n){
    if(n==2){
        return true;
    }
    else if(n<2){
        return false;
    }
    else{
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
    }
}
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans(2,-1);
        vector<int> prime;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                prime.push_back(i);
            }
        }
        if(prime.size()<2){
            return ans;
        } 
        else{
            ans[0]=prime[0];
            ans[1]=prime[1];
            int m=prime[1]-prime[0];
            for(int i=1;i<prime.size();i++){
                int t=prime[i]-prime[i-1];
                if(t<m){
                    m=t;
                    ans[0]=prime[i-1];
                    ans[1]=prime[i];
                }
            }
            return ans;
        }
    }
};