
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    reverse(s.begin(), s.end());

    for (char c : s) {
        int d = c - '0';

        if (d < 5) {
            cout << "O-|";
            for (int i = 0; i < d; i++) cout << "O";
            cout << "-";
            for (int i = d; i < 4; i++) cout << "O";
        } else {
            cout << "-O|";
            for (int i = 0; i < d - 5; i++) cout << "O";
            cout << "-";
            for (int i = d - 5; i < 4; i++) cout << "O";
        }

        cout << '\n';
    }

    return 0;
}
