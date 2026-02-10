class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,pos=0;
        string ans="";
        while(i<word1.size()&&j<word2.size()){
            if(pos%2==0){
                ans+=word1[i];
                i++;
            }
            else{
                ans+=word2[j];
                j++;
            }
            pos++;
        }
        if(i<word1.size()){
            for(int t=i;t<word1.size();t++){
                ans+=word1[t];
            }
        }
        else{
            for(int s=j;s<word2.size();s++){
                ans+=word2[s];
            }
        }
        return ans;
    }
};