class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int t=num;
        while(num>0){
            if(t-1000>=0){
                ans.push_back('M');
                t-=1000;
                num-=1000;
            }
            else if(t-900>=0){
                ans+="CM";
                t-=900;
                num-=900;
            }
            else if(t-500>=0){
                ans.push_back('D');
                t-=500;
                num-=500;
            }
            else if(t-400>=0){
                ans+="CD";
                t-=400;
                num-=400;
            }
            else if(t-100>=0){
                ans.push_back('C');
                t-=100;
                num-=100;
            }
            else if(t-90>=0){
                ans+="XC";
                t-=90;
                num-=90;
            }
            else if(t-50>=0){
                ans.push_back('L');
                t-=50;
                num-=50;
            }
            else if(t-40>=0){
                ans+="XL";
                t-=40;
                num-=40;
            }
            else if(t-10>=0){
                ans.push_back('X');
                t-=10;
                num-=10;
            }
            else if(t-9>=0){
                ans+="IX";
                t-=9;
                num-=9;
            }
            else if(t-5>=0){
                ans.push_back('V');
                t-=5;
                num-=5;
            }
            else if(t-4>=0){
                ans+="IV";
                t-=4;
                num-=4;
            }else {
                ans.push_back('I');
                t-=1;
                num-=1;
            }
        }
        return ans;
    }
};