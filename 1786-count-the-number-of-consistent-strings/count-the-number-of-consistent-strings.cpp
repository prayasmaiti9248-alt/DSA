class Solution {
public:
bool issafe(string allowed, vector<string>& words,int i ){
    for(int j=0;j<words[i].size();j++){
        if(allowed.find(words[i][j])==string::npos){
            return false;
        }
    }
    return true;
}
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            if(issafe(allowed,words,i)){
                count++;
            }
        }
        return count;
    }
};