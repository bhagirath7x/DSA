class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int prefix = 0, ans = 0;

        int i = 0;
        while(i < nums.size()) {
            prefix += nums[i];
            ans += mp[prefix - goal];
            mp[prefix]++;
            i++;
        }

        return ans;
    }
};