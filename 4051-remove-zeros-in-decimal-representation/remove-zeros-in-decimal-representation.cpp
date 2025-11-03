class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long rev = 0;

        while(n > 0) {
            int digit = n%10;
            if(digit != 0) ans = ans * 10 + digit;
            n /= 10;
        }

        while(ans > 0) {
            rev = rev * 10 + ans % 10;
            ans /= 10;
        }

        return rev;
    }
};