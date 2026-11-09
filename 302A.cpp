#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ones = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) ones++;
    }

    int neg = n - ones;

    while (m--) {
        int l, r;
        cin >> l >> r;

        int len = r - l + 1;

        if (len % 2 == 0 && ones >= len / 2 && neg >= len / 2) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
