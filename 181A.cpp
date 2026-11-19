
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    int r1 = -1, c1 = -1;
    int r2 = -1, c2 = -1;
    int r3 = -1, c3 = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                if (r1 == -1) {
                    r1 = i;
                    c1 = j;
                }
                else if (r2 == -1) {
                    r2 = i;
                    c2 = j;
                }
                else {
                    r3 = i;
                    c3 = j;
                }
            }
        }
    }

    int r = r1 ^ r2 ^ r3;
    int c = c1 ^ c2 ^ c3;

    cout << r + 1 << " " << c + 1 << endl;

    return 0;
}
