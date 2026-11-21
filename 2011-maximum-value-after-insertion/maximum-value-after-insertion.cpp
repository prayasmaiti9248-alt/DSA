class Solution {
public:
    string maxValue(string n, int x) {
        bool neg;
        if(n[0]=='-'){
            neg=true;
        }
        else{
            neg=false;
        }
        if(neg){
            int ins=0;
            for(int i=1;i<n.size();i++){
                if(n[i]-'0'>x){
                    n.insert(i,1,x+'0');
                    ins=1;
                    break;
                }
            }
            if(ins==0){
                n.push_back(x+'0');
            }
        }
        else{
             int ins=0;
            for(int i=0;i<n.size();i++){
                if(n[i]-'0'<x){
                    n.insert(i,1,x+'0');
                    ins=1;
                    break;
                }
            }
            if(ins==0){
                n.push_back(x+'0');
            }
        }
        return n;
    }
};