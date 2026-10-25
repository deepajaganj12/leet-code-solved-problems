
#include <bits/stdc++.h>
using namespace std;

int main() {
    double d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;

    cout << fixed << setprecision(10) << (L - d) / (v1 + v2) << '\n';

    return 0;
}
