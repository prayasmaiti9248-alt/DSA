class Solution {
public:
    int minimumDeletions(string s) {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                count++;
            }
            if(s[i]=='a' && count>0){
                count--;
                ans++;
            }
        }
        return ans;
    }
};