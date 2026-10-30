#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> x(n + 1, 0), y(n + 1, 0);

    for (int i = 0; i < a; i++) {
        int p;
        cin >> p;
        x[p] = 1;
    }

    for (int i = 0; i < b; i++) {
        int p;
        cin >> p;
        y[p] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (x[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }

    cout << endl;

    return 0;
}
