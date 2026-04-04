class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string ans;
        if(rows==1){
            return encodedText;
        }
      int diff=encodedText.size()/rows;
      for(int i=0;i<diff;i++){
        int t=i;
        while(t<encodedText.size()){
            ans+=encodedText[t];
            t=t+diff+1;
        }
      }
      int t=ans.size();
      for(int i=t-1;i>=0;i--){
        if(ans[i]==' '){
            ans.pop_back();
        }
        else{
            break;
        }
      }
      return ans;  
    }
};