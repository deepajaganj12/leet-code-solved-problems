#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[30][30];
    int row[30] = {0}, col[30] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            row[i] += a[i][j];
            col[j] += a[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (col[j] > row[i]) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}
