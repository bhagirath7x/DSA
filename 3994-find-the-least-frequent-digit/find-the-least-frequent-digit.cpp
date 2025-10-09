class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>ans(10,0);

        int temp = n;

        while(temp > 0) {
            int digit = temp%10;
            ans[digit]++;
            temp /= 10;
        }

        int minEl = INT_MAX;

        for(int i = 0; i < ans.size(); i++) {
            if(ans[i] > 0) {
                minEl = min(minEl, ans[i]);
            }
        }

        for(int i = 0; i < ans.size(); i++) {
            if(minEl == ans[i])
            return i;
        }
        return 0;
    }
};