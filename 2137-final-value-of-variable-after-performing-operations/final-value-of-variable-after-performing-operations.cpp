class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X"||operations[i]=="X--")
            n-=1;
            else
            n+=1;
        }
        return n;
    }
};