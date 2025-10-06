class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }

    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        long long primeSum = 0, nonPrimeSum = 0;
        
        vector<bool> isPrimeIndex(n, false);
        for (int i = 2; i < n; ++i) {
            isPrimeIndex[i] = isPrime(i);
        }

        for (int i = 0; i < n; ++i) {
            if (isPrimeIndex[i]) {
                primeSum += nums[i];
            } else {
                nonPrimeSum += nums[i];
            }
        }

        return abs(primeSum - nonPrimeSum);
    }
};