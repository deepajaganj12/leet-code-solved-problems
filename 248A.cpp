
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int leftOpen = 0, rightOpen = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        leftOpen += l;
        rightOpen += r;
    }

    int leftClosed = n - leftOpen;
    int rightClosed = n - rightOpen;

    int ans = min(leftOpen, leftClosed) + min(rightOpen, rightClosed);

    cout << ans;

    return 0;
}
