class Solution {
public:
    int longestValidParentheses(string s) {
        int l=0,r=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                l++;
            }
            else{
                r++;
            }
            if(r>l){
                l=0;
                r=0;
            }
            if(l==r){
                ans=max(ans,2*r);
            }
        }
        int n=s.size();
        l=0;
        r=0;
          for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                l++;
            }
            else{
                r++;
            }
            if(l>r){
                l=0;
                r=0;
            }
            if(l==r){
                ans=max(ans,2*r);
            }
        }
        return ans;
    }
};