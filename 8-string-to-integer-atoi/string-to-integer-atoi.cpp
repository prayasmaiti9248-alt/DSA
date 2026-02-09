class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int sc=0;
        int c=0;
        int dig=0;
        string ans="";
        int w=0;
        for(int i=0;i<s.size();i++){
            if(dig==0 && sc==0){
                if(s[i]>='0'&&s[i]<='9'){
                    ans+=s[i];
                    dig++;
                }
                else if(s[i]=='-'){
                    sign=-1;
                    sc++;
                }
                else if(s[i]=='+'){
                    sign=1;
                    sc++;
                }
                else if(s[i]!=' '){
                  break;
                }
            }
            else{
                if(s[i]>='0'&&s[i]<='9'){
                    ans+=s[i];
                    dig++;
                }
                else{
                    break;
                }
            }
        }
        if(dig==0){
            return 0;
        }
        else{
            long long t=0;
            for(int i=0;i<ans.size();i++){
                t=t*10+(ans[i]-'0');
                if(sign==1 && t>INT_MAX)
                return INT_MAX;
                if(sign==-1 && -t<INT_MIN)
                return INT_MIN;
            }
           
            return t*sign;
        }


    }
};