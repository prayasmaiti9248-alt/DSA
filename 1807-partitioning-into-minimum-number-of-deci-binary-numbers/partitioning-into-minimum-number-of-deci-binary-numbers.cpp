class Solution {
public:
    int minPartitions(string n) {
        int a=INT_MIN;
        for(int i=0;i<n.size();i++){
            int r=n[i]-'0';
            a=max(a,r);
        }
        return a;
    }
};