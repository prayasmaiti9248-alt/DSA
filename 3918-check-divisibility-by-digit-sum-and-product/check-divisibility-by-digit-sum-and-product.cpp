class Solution {
public:
    bool checkDivisibility(int n) {
      int s,p,d;
      s=0;
      p=1;
      int n1=n;
      while(n1>0){
        int r=n1%10;
        s+=r;
        p*=r;
        n1/=10;
      }
      d=s+p;
      if(n%d==0){
        return true;
      }
      else{
        return false;
      }  
    }
};