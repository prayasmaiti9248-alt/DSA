class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum=0;
        int n=capacity.size()-1;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int b=0;
        int box=0;
        while(n>=0){
            b+=capacity[n];
            box++;
            n--;
            if(sum<=b){
                break;
            }
        }
        return box;
    }
};