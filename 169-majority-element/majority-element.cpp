class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currEl = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                currEl = nums[i];
            }
            if(nums[i] == currEl) count++;
            else {
                count--;
            }
        }
        return currEl;
    }
};