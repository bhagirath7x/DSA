class Solution {
public:
    int calculate(int index, int n, vector<int> &ans) {
        if(index == n) {
            return 1;
        }
        if(index > n) {
            return 0;
        }

        if(ans[index] != -1) {
            return ans[index];
        }
        return ans[index] = calculate(index+1, n, ans) + calculate(index+2, n, ans);
    }
    int climbStairs(int n) {
        vector<int>ans(n+2, -1);
        return calculate(0, n, ans);
    }
};