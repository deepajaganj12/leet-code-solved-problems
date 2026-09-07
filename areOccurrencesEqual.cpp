class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        int m=freq.begin()->second;
        for (auto it : freq) {
            if (it.second != m) {
                return false;
            }
        }

        return true;
    }
};
