class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> res;
        bitset<64> seen;
        for(auto &q : queens){
            int qx = q[0], qy = q[1];
            seen.set(qx * 8 + qy);
        }
        for(int dx = -1; dx <= 1; dx++){
            for(int dy = -1; dy <= 1; dy++){
                if(dx == 0 && dy == 0) continue;
                int kx = king[0], ky = king[1];
                while(true){
                    kx += dx;
                    ky += dy;
                    if(kx >= 8 || ky >= 8 || kx < 0 || ky < 0) break;
                    if(seen.test(kx * 8 + ky)){
                        res.push_back({kx, ky});
                        break;
                    }
                }
            }
        }
        return res;
    }
};
