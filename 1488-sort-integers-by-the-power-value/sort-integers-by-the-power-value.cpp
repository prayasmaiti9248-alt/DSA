class Solution {
public:
int getpower(int n){
    int x=n;
    int p=0;
    while(x!=1){
        if(x%2==0){
            x/=2;
        }
        else{
            x=3*x+1;
        }
        p++;
    }
    return p;
}
    int getKth(int lo, int hi, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=lo;i<=hi;i++){
            int p=getpower(i);
            ans.push_back(i);
            m[i]=p;
        }
        sort(ans.begin(),ans.end(), [&](int a,int b){
            if (m[a] == m[b]) return a < b;
            return m[a]<m[b];
        });
        return ans[k-1];
    }
};