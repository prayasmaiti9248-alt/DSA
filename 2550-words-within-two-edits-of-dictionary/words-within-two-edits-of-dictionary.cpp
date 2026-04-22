class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<int> ans;
        vector<string> result;
        for(int i=0;i<queries.size();i++){
            int temp=INT_MAX;
            for(int j=0;j<dictionary.size();j++){
                int count=0;
                for(int k=0;k<dictionary[j].size();k++){            
                    if(queries[i][k]!=dictionary[j][k]){
                        count++;
                    }
                }
                temp=min(temp,count);
            }
            ans.push_back(temp);
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]<3){
                result.push_back(queries[i]);
            }
        }
        return result;
    }
};