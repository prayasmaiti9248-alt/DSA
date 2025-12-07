class Solution {
public:
bool isfreqsame(int f[],int f2[]){
    for(int i=0;i<26;i++){
        if(f[i]!=f2[i]){
            return false;
        }
    }
        return true;
}
    bool checkInclusion(string s1, string s2) {
        int f[26]{0};
        for(int i=0;i<s1.length();i++){
            f[s1[i]-'a']++;
        }
        int wsize=s1.length();
        int windex;
        for(int i=0;i<s2.length();i++){
            windex=0;
            int idx=i;
            int f2[26]{0};
            while(windex<wsize&&idx<s2.length()){
                f2[s2[idx]-'a']++;
                windex++;
                idx++;
            }
            if(isfreqsame(f,f2)){
                return true;
            }
        }
        return false;
    }
};