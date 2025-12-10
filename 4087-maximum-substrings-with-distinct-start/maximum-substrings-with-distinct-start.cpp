class Solution {
public:
    int maxDistinct(string s) {
        sort(s.begin(),s.end());
        int c=1;
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i])
            c+=1;
        }
       return c; 
    }
};