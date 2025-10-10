class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>m;

        for(int i = 0; i < matches.size(); i++) {
            m[matches[i][1]]++;
        }

        vector<int>notLost;
        vector<int>lostOnce;

        for(int i = 0; i < matches.size(); i++) {
            int winner = matches[i][0];
            int loser = matches[i] [1];

            if(m.find(winner) == m.end()) {
                notLost.push_back(winner);
                m[winner] = 2;
            }

            if(m[loser] == 1) {
                lostOnce.push_back(loser);
            }
        }

        sort(begin(lostOnce), end(lostOnce));
        sort(begin(notLost), end(notLost));

        return {notLost, lostOnce};
    }
};