class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int min=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            vector<int> temp;
            int dif=abs(arr[i]-arr[i+1]);
            if(dif<min){
                ans.clear();
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                min=dif;
                ans.push_back(temp);
            }
            else if(min==dif){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};