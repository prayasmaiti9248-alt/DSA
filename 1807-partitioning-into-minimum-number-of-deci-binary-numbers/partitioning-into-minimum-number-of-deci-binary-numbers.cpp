class Solution {
public:
    int minPartitions(string n) {
        int a=0;
        for(int i=0;i<n.size();i++){
            int r=n[i]-'0';
            if(r>a)
            a=r;
        }
        return a;
    }
};