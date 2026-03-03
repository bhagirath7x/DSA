class Solution {
public:
    int findFib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;

        return findFib(n-1) + findFib(n-2);
    }
    int fib(int n) {
        return findFib(n);
    }
};