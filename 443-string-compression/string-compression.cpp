class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int n=chars.size();
        for(int i=0;i<n;i++){
            char t=chars[i];
            int count=0;
            while(i<n&&t==chars[i]){
                count++;
                i++;
            }
            if(count==1){
                chars[idx++]=t;
            }
            else{
                chars[idx++]=t;
                string str=to_string(count);
                for(char d:str)
                chars[idx++]=d;
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};