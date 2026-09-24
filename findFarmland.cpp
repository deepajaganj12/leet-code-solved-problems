class Solution {
public:
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};

    int r;
    int c;

    bool valid(int i, int j) { return i >= 0 && i < r && j >= 0 && j < c; }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        r = land.size();
        c = land[0].size();

        queue<pair<int, int>> q;
        vector<vector<int>> ans;
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (land[i][j] == 1) {
                    int r1 = i;
                    int c1 = j;
                    int r2 = i;
                    int c2 = j;
                    q.push({i, j});
                    land[i][j] = -1;

                    while (!q.empty()) {
                        int curr = q.size();
                        while (curr--) {
                            int ni = q.front().first;
                            int nj = q.front().second;
                            r2 = max(r2,ni);
                            c2 = max(c2,nj);
                            q.pop();
                            for (int k = 0; k < 4; k++) {
                                if (valid(ni + row[k], nj + col[k]) &&
                                    land[ni + row[k]][nj + col[k]] == 1) {
                                    q.push({ni + row[k], nj + col[k]});
                                    land[ni + row[k]][nj + col[k]] = -1;
                                }
                            }
                        }
                    }
                    ans.push_back({r1,c1,r2,c2});
                }
            }
        }
        return ans;
    }
};
