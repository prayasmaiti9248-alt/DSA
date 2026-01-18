class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int lastrow=0;
        for(int i=0;i<bank.size();i++){
            int lasers=0;
                for (char c : bank[i]) {
                if (c == '1') lasers++;
            }

            if(lasers!=0){
             ans+=lastrow*lasers;   
             lastrow=lasers;
            }
        }
        return ans;
    }
};