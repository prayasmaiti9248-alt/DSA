class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        int minval=INT_MAX;
        for(int i=0;i<letters.size();i++){
            if(letters[i]-target>0 && minval>(letters[i]-target)){
                ans=letters[i];
                minval=letters[i]-target;
            }
        }
        return ans;
    }
};