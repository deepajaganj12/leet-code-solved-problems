class Solution {
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        int n = nums.size();
        const double NEG = -1e18;

        vector<vector<double>> dp(n + 1, vector<double>(k + 1, NEG));
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= min(k, i); j++) {

                double best = 0.0;
                int sum = 0;

                for (int x = i; x >= 1; x--) {
                    sum += nums[x - 1];
                    double avg = (double)sum / (i - x + 1);

                    best = max(best, dp[x - 1][j - 1] + avg);
                }

                dp[i][j] = best;
            }
        }

        return dp[n][k];
    }
};
