#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO";
            return 0;
        }

        if (i < n / 2) {
            a += s[i] - '0';
        } else {
            b += s[i] - '0';
        }
    }

    if (a == b) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
