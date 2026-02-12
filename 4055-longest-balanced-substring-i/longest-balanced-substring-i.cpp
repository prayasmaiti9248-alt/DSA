class Solution {
public:
bool check(vector<int> &freq){
    int c=0;
    for(int i=0;i<26;i++){
        if(freq[i]==0) continue;
        if(c==0){
            c=freq[i];
        }
        else if(freq[i]!=c){
            return false;
        }
    }
    return true;
}
    int longestBalanced(string s) {
        int ans=1;
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']+=1;
                if(check(freq)){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};