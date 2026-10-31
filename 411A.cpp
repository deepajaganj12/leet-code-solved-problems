#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool upper = false, lower = false, digit = false;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            upper = true;
        else if (c >= 'a' && c <= 'z')
            lower = true;
        else if (c >= '0' && c <= '9')
            digit = true;
    }

    if (s.size() >= 5 && upper && lower && digit)
        cout << "Correct";
    else
        cout << "Too weak";

    return 0;
}
