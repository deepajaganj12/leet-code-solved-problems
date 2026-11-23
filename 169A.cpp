
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    if (h[b - 1] == h[b]) {
        cout << 0;
    } else {
        cout << h[b] - h[b - 1];
    }

    return 0;
}
