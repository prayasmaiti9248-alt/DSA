class Solution {
public:
    bool checkStrings(string s1, string s2) {
     vector<int> even1(26,0);
     vector<int> odd1(26,0);
     vector<int> even2(26,0);
     vector<int> odd2(26,0);
     for(int i=0;i<s1.size();i++){
        if(i%2==0){
            int index1=s1[i]-'a';
            int index2=s2[i]-'a';
            even1[index1]++;
            even2[index2]++;
        }
        else{
            int index1=s1[i]-'a';
            int index2=s2[i]-'a';
            odd1[index1]++;
            odd2[index2]++;
        }
     }
     for(int i=0;i<26;i++){
        if(even1[i]!=even2[i]){
            return false;
        }
        if(odd1[i]!=odd2[i]){
            return false;
        }
     }
     return true;   
    }
};