class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int start = 0, end = 0;

        while(start < s.size() && end < t.size()) {
            if(s[start] == t[end]) {
                start++;
            }
            end++;
        }

        if(start == s.size()) {
            return true;
        }

        return false;
    }
};