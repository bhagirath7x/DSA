class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;

        unordered_map<string,vector<string>>map;

        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }

        for(auto it : map) {
            ans.push_back(it.second);
        }

        return ans;
    }
};