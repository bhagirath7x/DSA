class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int smallest = nums[0];
        int largest = nums[nums.size()-1];

        int ans = 1;
        for(int i = 2; i <= smallest; i++) {
            if(smallest % i == 0 && largest % i == 0) ans = i;
        }
        return ans;
    }
};