class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num : nums) {
            freq[num]++;
        }

        int ans = 0;

        int maxFreq = 0;

        for(auto it : freq) {
            maxFreq = max(maxFreq, it.second);
        }

        for(auto it : freq) {
            if(maxFreq == it.second) ans += maxFreq;
        }
        return ans;
    }
};