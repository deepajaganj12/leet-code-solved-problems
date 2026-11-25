#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = a[0], mn = a[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > mx) {
            count++;
            mx = a[i];
        }
        else if (a[i] < mn) {
            count++;
            mn = a[i];
        }
    }

    cout << count;

    return 0;
}
