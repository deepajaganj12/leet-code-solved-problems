class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<long long, int> mp;
        long long maxm = 0;
        for (int i = 0; i < wall.size(); i++) {
            long long sum = 0;
            for (int j = 0; j < wall[i].size(); j++) {
                sum += wall[i][j];
                mp[sum]++;
            }
            maxm = sum;
        }
        int temp = 0;
        for (auto& [num, freq] : mp) {
            if (num != maxm) {
                temp = max(temp, freq);
            }
        }
        return wall.size() - temp;
    }
};
