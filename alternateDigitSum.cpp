class Solution {
public:
    int alternateDigitSum(int n) {
        int digits = 0;
        int temp = n;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int m = 1;
        int ans = 0;

        while (n > 0) {
            int d = n % 10;

            if (digits % 2 == 1) {
                if (m % 2 == 1)
                    ans += d;
                else
                    ans -= d;
            } else {
                if (m % 2 == 1)
                    ans -= d;
                else
                    ans += d;
            }

            m++;
            n /= 10;
        }

        return ans;
    }
};
