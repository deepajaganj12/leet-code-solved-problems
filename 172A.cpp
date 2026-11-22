
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int ans = 0;

    for (int j = 0; j < s[0].size(); j++) {
        bool same = true;

        for (int i = 1; i < n; i++) {
            if (s[i][j] != s[0][j]) {
                same = false;
                break;
            }
        }

        if (same) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
