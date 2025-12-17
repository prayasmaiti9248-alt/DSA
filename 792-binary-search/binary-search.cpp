class Solution {
public:
int binarysearch(vector<int> n,int t,int s,int e){
    if(s<=e){
    int mid=s+(e-s)/2;
    if(n[mid]==t){
    return mid;
    }
    else if(n[mid]<t){
    return binarysearch(n,t,mid+1,e);
    }
    else{
    return binarysearch(n,t,s,mid-1);
    }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        return binarysearch(nums,target,0,nums.size()-1);
    }
};