class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;

        int num = x, ans = 0, digit;

        while(x) {
            digit = x % 10;
            x /= 10;

            if(ans > INT_MAX / 10)
            return 0;

            ans = ans * 10 + digit;
        }
    if (ans == num) return 1;
    else return 0;
    }

};