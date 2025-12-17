class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++){
            int max=score[i][k];
            int mi=i;
            for(int j=i+1;j<score.size();j++){
                if(max<score[j][k]){
                    max=score[j][k];
                    mi=j;
                }
            }
            if(max!=score[i][k]){
                swap(score[i],score[mi]);
            }

        }
        return score;
    }
};