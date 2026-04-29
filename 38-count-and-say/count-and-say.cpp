class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string p=countAndSay(n-1);
        string ans="";
        int i=0;
        while(i<p.size()){
            int count=1;
            while(i+1<p.size() && p[i]==p[i+1]){
                i++;
                count++;
            }
            ans+=to_string(count)+p[i];
            i++;
        }
        return ans;
    }
};