class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff = INT_MIN;
        for(int i = 0; i < nums.size()-1; i++) {
            maxDiff = max(maxDiff, abs(nums[i] - nums[i+1]));
        }

        return max(abs(nums[0] - nums[nums.size()-1]), maxDiff);
    }
};