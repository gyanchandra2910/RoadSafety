#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (char c : s) {
        if (c == '1') cnt1++;
        else if (c == '2') cnt2++;
        else if (c == '3') cnt3++;
    }

    int total = cnt1 + cnt2 + cnt3;
    int printed = 0;

    while (cnt1--) {
        cout << '1';
        printed++;
        if (printed < total) cout << '+';
    }
    while (cnt2--) {
        cout << '2';
        printed++;
        if (printed < total) cout << '+';
    }
    while (cnt3--) {
        cout << '3';
        printed++;
        if (printed < total) cout << '+';
    }

    cout << endl;
    return 0;
}
