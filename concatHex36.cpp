class Solution {
public:
    string concatHex36(int n) {
        return hex(n * n, 16) + hex(n * n * n, 36);
    }
    string hex(int n, int base) {
        string result = "";
        while (n > 0) {
            int r = n % base;
            if (r > 9) result += char('A' + r - 10);
            else result += to_string(r);
            n /= base;
        }
        reverse(result.begin(), result.end());

        return result;
    }
};
