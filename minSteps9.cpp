class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int n = s.size();
        int m = t.size();
        for (int i = 0; i < n; i++) {
            freq1[s[i] - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            freq2[t[i] - 'a']++;
        }
        int count = 0;

        for (int i = 0; i < 26; i++)
            count += abs(freq1[i] - freq2[i]);

        return count;
    }
};
