class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        int totalShift = 0;
        for(int i=n-1; i>=0; i--){
             totalShift = (totalShift + shifts[i]) % 26;
            s[i] = (s[i] - 'a' + totalShift) % 26 + 'a';
        }
        return s;
    }
};