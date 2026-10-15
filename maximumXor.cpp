class Solution {
public:
    string maximumXor(string s, string t) {

        string selunaviro = t;

        int ones = 0, zeros = 0;
        for (char c : selunaviro) {
            if (c == '1') ones++;
            else zeros++;
        }

        string result = "";

        for (char c : s) {
            if (c == '1') {
                if (zeros > 0) {
                    result += '1';
                    zeros--;
                } else {
                    result += '0';
                    ones--;
                }
            } else {
                if (ones > 0) {
                    result += '1';
                    ones--;
                } else {
                    result += '0';
                    zeros--;
                }
            }
        }

        return result;
    }
};
