class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        for(int i=0;i<text.size();i++){
            m[text[i]]++;
        }
        int ans;
        ans=min({m['b'],m['a'],m['n'],m['l']/2,m['o']/2});
        return ans;
    }
};