class Solution {
public:
    int lengthLongestPath(string input) {
        const int n = input.size();
        vector<int> levelLen(n + 1, 0);
        int res = 0;
        for (int i = 0; i < n; ++i) {
            int level = 0;
            while (i < n && input[i] == '\t') {
                ++level; ++i;
            }
            bool isFile = false;
            int len = 0;
            while (i < n && input[i] != '\n') {
                if (input[i] == '.') isFile = true;
                ++len; ++i;
            }
            levelLen[level + 1] = levelLen[level] + len;
            if (isFile) res = max(res, levelLen[level + 1] + level);
        }
        return res;
    }
};
