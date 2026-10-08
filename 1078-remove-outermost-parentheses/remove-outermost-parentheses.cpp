class Solution {
public:
    string removeOuterParentheses(string s) {
        string ns="";
        int o=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('&&o==0){
                o++;
            }
            else if(s[i]=='('){
                o++;
                ns.push_back(s[i]);
            }
            else if(s[i]==')'&&o==c+1){
                o=0;
                c=0;
            }
            else{
                ns.push_back(s[i]);
                c++;
            }
            

        }
        return ns;
    }
};