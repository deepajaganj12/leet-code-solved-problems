
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x = n / m;
    int r = n % m;

    for (int i = 0; i < m; i++) {
        cout << x + (i < r) << " ";
    }

    return 0;
}
