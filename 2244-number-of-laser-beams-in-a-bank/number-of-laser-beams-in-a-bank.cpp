class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int lastrow=0;
        for(int i=0;i<bank.size();i++){
            int lasers=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    lasers+=1;
                }
            }
            if(lasers!=0){
             ans+=lastrow*lasers;   
             lastrow=lasers;
            }
        }
        return ans;
    }
};