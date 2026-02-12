class Solution {
public:
void backtrack(string digits,string o,vector<string> &ans,string m[],int i){
    if(i>=digits.size()){
        ans.push_back(o);
        return;
    }
    int n=digits[i]-'0';
    string val=m[n];
    for(int j=0;j<val.size();j++){
        o.push_back(val[j]);
        backtrack(digits,o,ans,m,i+1);
        o.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string> ans;
        if(n==0){
            return ans;
        }
        int i=0;
        string o;
        string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backtrack(digits,o,ans,m,i);
        return ans;
    }
};