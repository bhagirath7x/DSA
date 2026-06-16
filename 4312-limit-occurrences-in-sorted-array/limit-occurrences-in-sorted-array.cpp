class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int num : nums) {
            if (freq[num] < k) {
                ans.push_back(num);
                freq[num]++;
            }
        }

        return ans;
    }
};