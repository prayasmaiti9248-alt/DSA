class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int c=0;
        for(int i=0;i<num.size();i++){
            if(num[i]-'0'<change[num[i]-'0']){
                num[i]=change[num[i]-'0']+'0';
                c=1;
            }
            else if(c==1 && num[i]-'0'>change[num[i]-'0']){
                break;
            }
        }
        return num;
    }
};