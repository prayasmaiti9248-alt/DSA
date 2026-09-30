class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.size(),1);
        int m=0;
        int c=0;
        int a;
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                c++;
                m=max(c,m);
            }
            else{
                c--;
            }
        }
        a=m/2;
        c=0;
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
             if(c+1<=a){
                ans[i]=0;
                c++;
             }
            }
            else{
                if(c-1>=0){
                    ans[i]=0;
                    c--;
                }
            }
        }
        return ans;
    }
};