#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    cin >> S;

    int hundreds_place = S / 100;

    int tens_place = S / 10;
    if (tens_place == 1 | tens_place == 11) {
        tens_place = 1;
    } else {
        tens_place = 0;
    }

    int ones_place = S % 100;
    if (ones_place == 1 | ones_place == 11) {
        ones_place = 1;
    } else {
        ones_place = 0;
    }

    int result = hundreds_place + tens_place + ones_place;
    cout << result << endl;

    return 0;
}