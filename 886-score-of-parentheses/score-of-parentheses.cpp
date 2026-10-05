class Solution {
public:
    int scoreOfParentheses(string s) {
       long long ans=0;
       int o=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            o++;
        }
        else{
            o--;
            if(s[i-1]=='('){
                ans+=pow(2,o);
            }
        }
       }
       return ans; 
    }
};