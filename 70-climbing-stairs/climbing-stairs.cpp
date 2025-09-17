class Solution {
public:
    int climbStairs(int n) {
        int ans, next1 = 1, next2 = 0;

        for(int i = n-1; i >= 0; i--) {
            ans = next1 + next2;
            next2 = next1;
            next1 = ans;
        }
        return ans;
    }
};