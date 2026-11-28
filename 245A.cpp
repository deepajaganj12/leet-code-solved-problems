#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0, d = 0;
    int t, x, y;

    while (n--) {
        cin >> t >> x >> y;

        if (t == 1) {
            a += x;
            b += 10;
        } else {
            c += x;
            d += 10;
        }
    }

    cout << (a * 2 >= b ? "LIVE" : "DEAD") << '\n';
    cout << (c * 2 >= d ? "LIVE" : "DEAD") << '\n';

    return 0;
}
