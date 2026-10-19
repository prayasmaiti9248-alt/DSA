class Solution {
public:
    bool detectCapitalUse(string word) {
        bool c=false;
        bool l=false;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])&&i==0){
                continue;
            }
            else if(isupper(word[i])){
                c=true;
            }
            else{
                l=true;
            }
            if(c==true&&l==true){
                return false;
            }
        }
        return true;
        
    }
};