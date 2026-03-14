class Solution {
public:bool happy(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            return false;
        }
    }
    return true;
}
void makehappy(int n,string &s, vector<string> &ans){
    if(s.size()==n){
        if(happy(s)){
            ans.push_back(s);
        }
        return;
    }
    s.push_back('a');
    makehappy(n,s,ans);
    s.pop_back();
    s.push_back('b');
    makehappy(n,s,ans);
    s.pop_back();
    s.push_back('c');
    makehappy(n,s,ans);
    s.pop_back();
}
    string getHappyString(int n, int k) {
        vector<string> ans;
        string s;
        makehappy(n,s,ans);
        if(k>ans.size()){
            return "";
        }
        return ans[k-1];
    }
};