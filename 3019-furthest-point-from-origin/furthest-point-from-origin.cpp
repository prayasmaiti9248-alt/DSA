class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int sum=0;
        unordered_map<char,int> m;
        for(int i=0;i<moves.size();i++){
            m[moves[i]]++;
        }
        if(m['L']==0&&m['R']==0){
            sum=moves.size();
        }
        else if(m['L']>=m['R']){
            sum+=m['L']+m['_']-m['R'];
        }
        else{
            sum+=m['R']+m['_']-m['L'];
        }
        return sum;
    }
};