class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int cur=arr[0];
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-cur)>1){
                arr[i]=cur+1;
            }
            cur=arr[i];
        }
        return cur;
    }
};