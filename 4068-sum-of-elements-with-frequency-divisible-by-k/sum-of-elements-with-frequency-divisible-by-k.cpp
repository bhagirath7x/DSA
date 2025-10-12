class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int ans = 0;

        for (auto& [num, count] : freq) {
            if (count % k == 0) {
                ans += num * count;
            }
        }

        return ans;
    }
};