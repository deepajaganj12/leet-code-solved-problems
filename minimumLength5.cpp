class Solution {
public:
    int minimumLength(string s) {
        vector<int> c(26, 0);
        int t = 0;
        for (char curr : s) {
            c[curr - 'a']++;
        }
        for (int f : c) {
            if (f == 0) continue;
            if (f % 2 == 0) {
                t += 2;
            } else {
                t += 1;
            }
        }
        return t;
    }
};
