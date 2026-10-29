#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int sum = 0, mx = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    if (sum - mx <= s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
