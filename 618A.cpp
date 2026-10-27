#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;

    while (n > 0) {
        int p = 1;
        while (p * 2 <= n) {
            p *= 2;
        }
        a.push_back(log2(p));
        n -= p;
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] + 1 << " ";
    }

    return 0;
}
