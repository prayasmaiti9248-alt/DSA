class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)
        return "";
        int n=sum/9;
        int r=sum%9;
        return(string(n,'9')+ char('0'+r)+ string(num,'0')).substr(0,num);
    }
};