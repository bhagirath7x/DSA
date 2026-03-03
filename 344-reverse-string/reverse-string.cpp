class Solution {
public:
    void reverse(vector<char>& s, int i, int j) {
        if(i >= j) return;
        char c = s[i];
        s[i] = s[j];
        s[j] = c;

        reverse(s, i+1, j-1);
    }
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size()-1);
    }
};