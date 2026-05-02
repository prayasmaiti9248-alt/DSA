class Solution {
public:
bool isvalid(int n){
    vector<int> temp;
    int newnum=0;
    int t=n;
    if(n==0||n==1||n==8){
        return false;
    }
    while(n>0){
        int i=n%10;
        if(i==3||i==4||i==7){
            return false;
        }
        if(i==0||i==1||i==8){
            temp.insert(temp.begin(),i);
        }
        if(i==2){
            temp.insert(temp.begin(),5);
        }
        if(i==5){
            temp.insert(temp.begin(),2);
        }
        if(i==6){
            temp.insert(temp.begin(),9);
        }
        if(i==9){
            temp.insert(temp.begin(),6);
        }
        n=n/10;
    }
    for(int i=0;i<temp.size();i++){
        newnum=(newnum*10)+temp[i];
    }
    if(newnum==t){
        return false;
    }
    return true;
}
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(isvalid(i)){
                count++;
            }
        }
        return count;
    }
};