class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<int>distinct;
        for(auto it : freq) {
            distinct.push_back(it.first);
        }
        sort(distinct.begin(), distinct.end());
        
        for(int i = 0; i < distinct.size(); i++) {
            for(int j = i+1; j < distinct.size(); j++) {
                int x = distinct[i];
                int y = distinct[j];
                if(freq[x] != freq[y]) return {x, y};
            }
        }
        return {-1, -1};
    }
};