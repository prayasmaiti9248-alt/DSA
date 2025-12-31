class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       int p=pref[0];
       vector<int> ans;
       ans.push_back(p);
       for(int i=1;i<pref.size();i++){
        p=pref[i]^pref[i-1];
        ans.push_back(p);
       } 
       return ans;
    }
};