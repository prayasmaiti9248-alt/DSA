class Solution {
public:
    string largestGoodInteger(string num) {
       string ans="";
       string g="";
       for(int i=1;i+1<num.size();i++){
        if(num[i]==num[i-1]&&num[i]==num[i+1]){
            g=string(3,num[i]);
            if(ans.size()==0){
                ans=g;
            }
            else{
                if(ans[0]-'0'<g[0]-'0'){
                    ans=g;
                }
            }
        }
       }
       return ans; 
    }
};