class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>rows(m);
        vector<int>cols(n);

        for(int row = 0; row < m; row++) {
            for(int col = 0; col < n; col++) {
                if(mat[row][col] == 1) {
                    rows[row]++;
                    cols[col]++;
                }
            }
        }
        int ans = 0;
        for(int row = 0; row < m; row++) {
            for(int col = 0; col < n; col++) {
                if(mat[row][col] == 0) continue;
                if(mat[row][col] == 1 && rows[row] == 1 && cols[col] == 1) {
                    ans++;
                }
            }
        }

        return ans;
    }
};