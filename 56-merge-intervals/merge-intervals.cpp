class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][1]>=intervals[i][0]){
                int start=intervals[i-1][0];
                int end=max(intervals[i-1][1],intervals[i][1]);
                intervals[i-1][0]=-1;
                intervals[i-1][1]=-1;
                intervals[i][0]=start;
                intervals[i][1]=end;
            }

        }
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]!=-1||intervals[i][1]!=-1){
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};