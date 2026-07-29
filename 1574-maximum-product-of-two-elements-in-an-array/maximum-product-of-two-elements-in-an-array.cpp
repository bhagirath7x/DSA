class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        ans = ((nums[n-2] - 1) * (nums[n-1] - 1));

        return ans;
    }
};