class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count=0;
        vector<int> C;
        unordered_map<int,int> m;
        for(int i=0;i<A.size();i++){
            if(A[i]==B[i]){
                m[A[i]]+=2;
                count++;
            }
            else{
                m[A[i]]++;
                m[B[i]]++;
                if(m[A[i]]==2){
                    count++;
                }
                if(m[B[i]]==2){
                    count++;
                }
            }
            C.push_back(count);
        }
        return C;
    }
};