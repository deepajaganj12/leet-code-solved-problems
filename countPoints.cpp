class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {

        vector<int> ans;

        for (auto &q : queries) {

            int cx = q[0];
            int cy = q[1];
            int r  = q[2];

            int cnt = 0;

            for (auto &p : points) {

                int x = p[0];
                int y = p[1];

                if (x < cx - r || x > cx + r || y < cy - r || y > cy + r)
                    continue;

                int dx = x - cx;
                int dy = y - cy;

                if (dx*dx + dy*dy <= r*r)
                    cnt++;
            }

            ans.push_back(cnt);
        }

        return ans;
    }
};
