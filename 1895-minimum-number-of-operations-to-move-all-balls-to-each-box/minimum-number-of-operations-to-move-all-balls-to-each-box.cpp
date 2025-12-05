class Solution {
public:
    vector<int> minOperations(string boxes) {
        int in;
        vector<int> t;
        vector<int> ans;
        int p;
        for(int i=0;i<boxes.size();i++){
            in=boxes[i]-'0';
            t.push_back(in);
        }
        for(int i=0;i<t.size();i++){
            p=0;
            for(int j=0;j<t.size();j++){
                p+=(abs(i-j)*t[j]);
            }
            ans.push_back(p);
        }
        return ans;
    }
};