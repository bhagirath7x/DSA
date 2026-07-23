class Solution {
public:
    int lengthOfLastWord(string s) {

        stringstream ss(s);

        string token;

        while (ss >> token) {
            // the last word will stored in tkn
        }

        return token.length();
    }
};