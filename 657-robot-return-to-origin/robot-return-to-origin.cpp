class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map <char,int> m;
        for(int i=0;i<moves.size();i++){
            m[moves[i]]++;
        }
        if(m['U']==m['D']&&m['L']==m['R']){
            return true;
        }
        return false;
    }
};