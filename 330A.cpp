#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> a(r);
    for (int i = 0; i < r; i++) {
        cin >> a[i];
    }

    vector<bool> row(r, true), col(c, true);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'S') {
                row[i] = false;
                col[j] = false;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < r; i++) {
        if (row[i]) {
            ans += c;
            for (int j = 0; j < c; j++) {
                a[i][j] = 'E';
            }
        }
    }

    for (int j = 0; j < c; j++) {
        if (col[j]) {
            for (int i = 0; i < r; i++) {
                if (a[i][j] == '.') {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
