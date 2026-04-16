class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> m;

        // Step 1: store indices
        for (int i = 0; i < n; i++) {
            m[nums[i]].push_back(i);
        }

        vector<int> ans;

        for (int q : queries) {
            int val = nums[q];
            vector<int>& v = m[val];

            if (v.size() == 1) {
                ans.push_back(-1);
                continue;
            }

            // Step 2: binary search
            auto it = lower_bound(v.begin(), v.end(), q);
            int idx = it - v.begin();

            int res = INT_MAX;

            // Check left neighbor
            int left = (idx - 1 + v.size()) % v.size();
            int d1 = abs(q - v[left]);
            res = min(res, min(d1, n - d1));

            // Check right neighbor
            int right = (idx + 1) % v.size();
            int d2 = abs(q - v[right]);
            res = min(res, min(d2, n - d2));

            ans.push_back(res);
        }

        return ans;
    }
};