class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int smallest = nums[0];
        int idx = 0;
        int largest = nums[nums.size()-1];

        for(int i = smallest; i < largest; i++) {
            if(nums[idx] == i) idx++;
            else ans.push_back(i); 
        }

        return ans;
    }
};