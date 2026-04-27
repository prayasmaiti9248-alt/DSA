class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int c;
        int ht;
        int i=0;
        int j=height.size()-1;
        int w;
        while(j>i){
            w=j-i;
            ht=min(height[j],height[i]);
            c=ht*w;
            ans=max(ans,c);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return ans;
    }
};