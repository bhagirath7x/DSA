class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>frequency(101, 0);

        for(int i = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;
        }

        int maxFreq = INT_MIN;

        for(int i = 0; i < frequency.size(); i++) {
            if(maxFreq == frequency[i]) continue;
            maxFreq = max(maxFreq, frequency[i]);
        }

        int ans = 0;

        for(int i = 0; i < frequency.size(); i++) {
            if(frequency[i] == maxFreq) ans += maxFreq;
        }

        return ans;
    }
};