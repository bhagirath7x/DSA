class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int prefix = 0, ans = 0;

        int i = 0;
        while(i < nums.size()) {
            prefix += nums[i];
            ans += mp[prefix - k];
            mp[prefix]++;
            i++;
        }

        return ans;
    }
};