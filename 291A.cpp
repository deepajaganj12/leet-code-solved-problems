
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x != 0) {
            mp[x]++;
        }
    }

    int ans = 0;

    for (auto p : mp) {
        if (p.second > 2) {
            cout << -1;
            return 0;
        }

        if (p.second == 2) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}
