class Solution {
public:
    int minAddToMakeValid(string s) {
       int o=0,c=0;
       int ans=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            o++;
        }
        else{
            c++;
        }
        if(c>o){
            ans++;
            o++;
        }
       }
       ans+=abs(c-o);
       return ans;
    }
};