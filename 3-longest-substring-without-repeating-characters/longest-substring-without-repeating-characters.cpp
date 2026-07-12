class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int maxLen = 0;

        int i = 0, j = 0;
        while(j < s.size()) {

            mp[s[j]]++;

            while(mp[s[j]] > 1) {
                mp[s[i]]--;
                i++;
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};