class Solution {
public:
    bool checkString(string s) {
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                if(b!=0){
                    return false;
                }
            }
            else{
                b=1;
            }
        }
        return true;
    }
};