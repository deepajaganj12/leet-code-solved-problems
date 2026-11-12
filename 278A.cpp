
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d[101], s, t;
    int total = 0, sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> d[i];
        total += d[i];
    }

    cin >> s >> t;

    if (s > t) swap(s, t);

    for (int i = s; i < t; i++) {
        sum += d[i];
    }

    cout << min(sum, total - sum);

    return 0;
}
