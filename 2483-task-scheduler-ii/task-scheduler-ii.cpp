class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
       long long dc=0;
       int n=tasks.size();
       unordered_map<long long,long long> mp;
       for(int i=0;i<n;i++){
        if(mp.find(tasks[i]) != mp.end()){
            long long last_done=mp[tasks[i]];
            if(dc-last_done<space+1){
                dc=last_done + space+1;
            }
        }
        mp[tasks[i]]=dc;
        dc++;
       }
       return dc;
    }
};