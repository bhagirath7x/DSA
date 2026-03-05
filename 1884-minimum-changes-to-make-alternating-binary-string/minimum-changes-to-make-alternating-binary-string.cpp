class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int startWith_0 = 0;
        int startWith_1 = 0;

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                if(s[i] == '1') {
                    startWith_0++;
                }
                else {
                    startWith_1++;
                }
            }
            else {
                if(s[i] == '1') {
                    startWith_1++;
                }
                else {
                    startWith_0++;
                }
            }
        }

        return min(startWith_0, startWith_1);
    }
};