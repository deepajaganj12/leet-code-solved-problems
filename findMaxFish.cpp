class Solution {
public:
    int DFS(int i, int j, vector<vector<int>>& grid, const int& n,
            const int& m) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
            return 0;
        }
        int cnt = grid[i][j];
        grid[i][j] = 0;
        cnt += DFS(i + 1, j, grid, n, m) + DFS(i - 1, j, grid, n, m) +
                  DFS(i, j + 1, grid, n, m) + DFS(i, j - 1, grid, n, m);
        return cnt;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] > 0) {
                    ans = max(ans, DFS(i, j, grid, n, m));
                }
            }
        }
        return ans;
    }
};
