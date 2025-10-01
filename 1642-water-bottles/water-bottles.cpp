class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;

        while (numBottles >= numExchange) {
            int full = numBottles / numExchange;
            int rem = numBottles % numExchange;

            ans += full;
            numBottles = full + rem;
        }

        return ans;
    }
};