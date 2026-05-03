class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s;
        if(s==goal){
            return true;
        }
     do{
        temp.push_back(temp[0]);
        temp.erase(0,1);
        if(temp==goal){
            return true;
        }
    }while(temp!=s);
    return false;
    }
};