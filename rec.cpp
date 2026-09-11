class Solution {
public: 
    int n, m;
    string s, t;
    int dp[101][101][2][2];

    int rec(int i, int j, int ls, int rs){
        if(j == m) return 0;
        if(i == n){
            if(j == m) return 0;
            return rec(0, j, ls, rs);
        }
        if(i == -1){
            return rec(n - 1, j, ls, rs);
        }

        if(dp[i][j][ls][rs] != -1) return dp[i][j][ls][rs];
        int ans = 1e9;
        if(s[i] == t[j]){
            ans = min(ans, 1 + rec(i, j + 1, 0, 0));
        }
        else{
            if(ls == 0)
              ans = min(ans, 1 + rec(i + 1, j, ls, 1));
            if(rs == 0)
              ans = min(ans, 1 + rec(i - 1, j, 1, rs));
        }

        dp[i][j][ls][rs] = ans;
        return ans;
    }
    int findRotateSteps(string ring, string key) {
        s = ring, t = key;

        n = s.size(), m = t.size();
        memset(dp, -1, sizeof(dp));


        return rec(0, 0, 0, 0);
    }
};

