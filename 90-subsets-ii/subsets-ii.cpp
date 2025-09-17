class Solution {
public:
    void subsets(vector<int>nums, int index, int n, vector<vector<int>> &ans, vector<int> &temp) {
        if(index == n) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[index]);
        subsets(nums, index+1, n, ans, temp);
        temp.pop_back();
        int idx = index;

        while(idx < n && nums[idx] == nums[index]) {
            idx++;
        }

        index = idx;
        subsets(nums, index, n, ans, temp);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        vector<int>temp;

        subsets(nums, 0, nums.size(), ans, temp);
        return ans;
    }
};