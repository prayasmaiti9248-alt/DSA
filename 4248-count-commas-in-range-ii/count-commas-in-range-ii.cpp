class Solution {
public:
    long long countCommas(long long n) {
       long long ans=0;
       if(n-pow(10,15)>=0){
        ans+=(n-pow(10,15)+1)*5+(4*(pow(10,15)-pow(10,12)))+(3*(pow(10,12)-pow(10,9)))+(2*(pow(10,9)-pow(10,6)))+(pow(10,6)-pow(10,3));
       }
       else if(n-pow(10,12)>=0){
        ans+=(n-pow(10,12)+1)*4+(3*(pow(10,12)-pow(10,9)))+(2*(pow(10,9)-pow(10,6)))+(pow(10,6)-pow(10,3));
       }  
       else if(n-pow(10,9)>=0){
        ans+=(n-pow(10,9)+1)*3+(2*(pow(10,9)-pow(10,6)))+(pow(10,6)-pow(10,3));
       } 
       else if(n-pow(10,6)>=0){
        ans+=(n-pow(10,6)+1)*2+(pow(10,6)-pow(10,3));
       } 
       else if(n-pow(10,3)>=0){
        ans+=(n-pow(10,3)+1);
       }
       return ans;
    }
};