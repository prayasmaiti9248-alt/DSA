class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=1;
        if(s.empty()){
            return 0;
        }
       for(int i=0;i<s.size()-1;i++){
        unordered_map<char,int> m;
        int count=0;
        for(int j=i;j<s.size();j++){
            if(m.find(s[j])==m.end()){
                count++;
                m[s[j]]++;
            }
            else
            break;
        }
        ans=max(ans,count);
       } 
       return ans;
    }
};