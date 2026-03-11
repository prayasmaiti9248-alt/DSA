class Solution {
public:
string tobinary(int n){
    if(n==0)return "0";
    string s="";
    while(n>0){
        s+=to_string(n%2);
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int todec(string s){
    int n=0;
    int pow=1;
        for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == '1') {
            n+= pow;
        }
        pow*= 2; 
    }
    return n;

}
    int bitwiseComplement(int n) {
      string s=tobinary(n);
      //flip
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='1';
        }
        else{
            s[i]='0';
        }
      }  
      int ans=todec(s);
      return ans;
    }
};