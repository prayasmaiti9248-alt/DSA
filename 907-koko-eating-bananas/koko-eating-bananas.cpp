class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=0;
        for(int i=0;i<piles.size();i++){
            e=max(e,piles[i]);
        }
        long long ans=e;
        while(s<=e){
            long long m=s+(e-s)/2;
            long long time=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%m==0){
                    time+=piles[i]/m;
                }
                else{
                    time+=(piles[i]/m)+1;
                }
                if(time>h){
                    break;
                }
                
            }
            if(time<=h){
                    ans=m;
                    e=m-1;
                }
            else{
                s=m+1;
            }    
        }
        return ans;
    }
};