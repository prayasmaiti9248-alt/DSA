class Solution {
public:
    bool checkOnesSegment(string s) {
        int seg=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                seg=1;
            }
            if(seg==1&&s[i]=='1'){
                return false;
            }
        }
        return true;
    }
};