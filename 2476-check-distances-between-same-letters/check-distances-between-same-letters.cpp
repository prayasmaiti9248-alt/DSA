class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
      unordered_map<char,int> m;
      for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            m[s[i]]=i;
        }
        else{
            m[s[i]]=i-m[s[i]]-1;
        }
      }
      for(const auto& [c,d] : m){
        if(distance[c-'a']!=d){
            return false;
        }
      }  
      return true;
    }
};