class Solution {
public:
    string getHint(string secret, string guess) {
       unordered_map<char,int> m;
       int b=0;
       int c=0;
       for(int i=0;i<secret.size();i++){
        m[secret[i]]++;
       } 
       //Bulls
       for(int i=0;i<guess.size();i++){
        if(guess[i]==secret[i]){
            b++;
            m[secret[i]]--;
        }
       }
       //Cows
       for(int i=0;i<guess.size();i++){
        if(guess[i]!=secret[i]){
            if(m.find(guess[i])!=m.end() && m[guess[i]]>0){
                c++;
                m[guess[i]]--;
            }
        }
       }
       string ans;
       ans=to_string(b)+'A'+to_string(c)+'B';
       return ans;
    }
};