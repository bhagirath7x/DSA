class Solution {
public:
    int gcd(int a, int b) {
        while(a > 0 && b > 0) {
            if(a > b) {
                a = a - b;
            }
            else {
                b = b - a;
            }
        }
        if(a == 0) return b;
        else return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int smallest = nums[0];
        int largest = nums[nums.size()-1];

        return gcd(smallest, largest);
    }
};