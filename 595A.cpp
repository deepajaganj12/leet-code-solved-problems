#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char a, b;
            cin >> a >> b;

            if (a == '1' || b == '1') {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
