class Solution {
public:
vector<string> ans;
bool isvalid(string s){
    int o=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            o++;
        }
        else if(s[i]==')'){
            c++;
        }
        if(c>o){
            return false;
        }
    }
    if(o==c){
        return true;
    }
    return false;
}

    vector<string> removeInvalidParentheses(string s) {
      vector<string> result;
        if (s.empty()) return {""};

        unordered_set<string> visited;
        queue<string> q;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            
            if (isvalid(curr)) {
                result.push_back(curr);
                found = true;
            }

            
            if (found) continue;

            
            for (int i = 0; i < curr.size(); i++) {
                if (curr[i] != '(' && curr[i] != ')') continue;

                string nextStr = curr.substr(0, i) + curr.substr(i + 1);

                if (visited.find(nextStr) == visited.end()) {
                    visited.insert(nextStr);
                    q.push(nextStr);
                }
            }
        }

        return result;
    }
};