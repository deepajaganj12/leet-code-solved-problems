#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = -1, second = -1, idx = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            second = mx;
            mx = a[i];
            idx = i + 1;
        }
        else if (a[i] > second) {
            second = a[i];
        }
    }

    cout << idx << " " << second << endl;

    return 0;
}
