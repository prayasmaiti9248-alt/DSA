class Solution {
public:
bool issymmetric(string s){
    if(s.size()%2!=0){
        return false;
    }
    else{
        int i=0;
        int j=s.size()-1;
        int sum1=0;
        int sum2=0;
        while(i<j){
            int t1=s[i]-'0';
            sum1+=t1;
            int t2=s[j]-'0';
            sum2+=t2;
            i++;
            j--;
        }
        if(sum1==sum2){
            return true;
        }
        else{
            return false;
        }
    }
}
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            if(issymmetric(s)){
                count++;
            }
        }
        return count;
    }
};