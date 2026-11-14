#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x, cnt = 0;
        cin >> x;

        while (x > 0) {
            int d = x % 10;

            if (d == 4 || d == 7) {
                cnt++;
            }

            x /= 10;
        }

        if (cnt <= k) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
