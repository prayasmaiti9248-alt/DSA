class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> ans(26,0);
        for(int i=0;i<s.length();i++){
            ans[s[i]-'a']+=1;
        }
        vector<int> v;
        v.push_back(ans[0]);
        v.push_back(ans[4]);
        v.push_back(ans[8]);
        v.push_back(ans[14]);
        v.push_back(ans[20]);
        ans[0]=0;
        ans[4]=0;
        ans[8]=0;
        ans[14]=0;
        ans[20]=0;
        sort(ans.begin(),ans.end());
        sort(v.begin(),v.end());
        int n=ans.size()-1;
        int l=ans[n]+v[4];
        return l;

    }
};