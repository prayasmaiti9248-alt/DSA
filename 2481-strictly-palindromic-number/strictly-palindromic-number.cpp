class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            vector<int> ans;
            int temp=n;
            while(temp>0){
                ans.push_back(temp%i);
                temp=temp/i;
            }
            int l=0;
            int r=ans.size()-1;
            while(l<r){
                if(ans[l]!=ans[r])
                return false;
                l++;
                r--;
            }
        }
        return true;
    }
};