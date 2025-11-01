class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        for (int n : nums) {
            if (n % k == 0) {
                s.insert(n);
            }
        }

        int ans = k;
        while (s.find(ans) != s.end()) {
            ans += k;
        }

        return ans;
    }
};