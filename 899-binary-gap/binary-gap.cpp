class Solution {
public:
vector<int> tobinary(int n,vector<int> &b){
    while(n>0){
        int r=n%2;
        b.push_back(r);
        n/=2;
    }
    return b;
}
    int binaryGap(int n) {
       vector<int> b;
       tobinary(n,b);
       int start=-1;
       int end=-1;
       int ans=0;
       for(int i=0;i<b.size();i++){
        if(start==-1&&b[i]==1){
            start=i;
        }
        else if(b[i]==1){
            end=i;
            ans=max(ans,abs(end-start));
            start=i;
        }
       }
       return ans;
    }
};