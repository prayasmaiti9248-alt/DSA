class Solution {
public:
void backtrack(string &str,int o,int c, vector<string> &ans){
    if(c==0 && o==0){
        ans.push_back(str);
    }
    if(o>0){
        str.push_back('(');
        backtrack(str,o-1,c,ans);
        str.pop_back();
    }
    if(c>o){
        str.push_back(')');
        backtrack(str,o,c-1,ans);
        str.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string str="";
        vector<string> ans;
        backtrack(str,n,n,ans);
        return ans;
    }
};