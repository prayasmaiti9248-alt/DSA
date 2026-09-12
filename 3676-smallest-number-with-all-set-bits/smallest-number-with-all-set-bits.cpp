class Solution {
public:
int toint(string s){
    int t=0;
    for(int i=0;i<s.size();i++){
        t+=pow(2,i);
    }
    return t;
}
    int smallestNumber(int n) {
        int t;
        string s="";
        while(true){
            s=s+'1';
            t=toint(s);
            if(t>=n){
                return t;
            }
        }
        return 0;
    }
};