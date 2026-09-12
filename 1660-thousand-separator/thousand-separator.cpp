class Solution {
public:
    string thousandSeparator(int n) {
       int pos=0;
       string ans="";
       if(n==0){
        return "0";
       }
       while(n>0){
        if(pos%3==0&&pos!=0){
            ans='.'+ans;
        }
        int r=n%10;
        ans=to_string(r)+ans;
        pos++;
        n/=10;

       }
       return ans;
    }
};