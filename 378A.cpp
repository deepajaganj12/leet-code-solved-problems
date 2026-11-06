#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int first = 0, draw = 0, second = 0;

    for (int i = 1; i <= 6; i++) {
        int x = abs(a - i);
        int y = abs(b - i);

        if (x < y)
            first++;
        else if (x == y)
            draw++;
        else
            second++;
    }

    cout << first << " " << draw << " " << second;

    return 0;
}
