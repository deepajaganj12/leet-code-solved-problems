class Solution {
public:
    bool DFS(vector<vector<int>>& grid2, vector<vector<int>>& grid1, int i, int j) {
        if (i < 0 || i >= grid2.size() || j < 0 || j >= grid2[0].size() ||
            grid2[i][j] == 0) {
            return true;
        }
        bool poss = (grid1[i][j] == 1);
        grid2[i][j] = 0;
        poss &= DFS(grid2, grid1, i + 1, j);
        poss &= DFS(grid2, grid1, i - 1, j);
        poss &= DFS(grid2, grid1, i, j + 1);
        poss &= DFS(grid2, grid1, i, j - 1);
        return poss;
    }

    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        int ans = 0;
        int n = grid2.size();
        int m = grid2[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid2[i][j] == 1 && grid1[i][j] == 1 && DFS(grid2, grid1, i, j)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
