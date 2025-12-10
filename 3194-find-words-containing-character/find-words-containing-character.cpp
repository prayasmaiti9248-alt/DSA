class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> c;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(x==words[i][j]){
                    c.push_back(i);
                    break;
                }
            }
        }
        return c;
    }
};