class Solution {
public:
    int minimumPushes(string word) {
        int s=word.size();
        int ans;
        if(s>24){
            ans=8+16+24+(s-24)*4;
       }
        else if(s>16){
            ans=8+16+(s-16)*3;
        }
        else if(s>8){
            ans=8+(s-8)*2;
        }
        else{
            ans=s;
        }
        return ans;
    }
};