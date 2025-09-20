class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int minSum = INT_MAX;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = tasks[i][0] + tasks[i][1];
            minSum = min(minSum, sum);
        }
        return minSum;
    }
};