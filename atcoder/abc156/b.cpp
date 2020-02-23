#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int result = 0;
    int quotient = -1;

    while(true) {
        quotient = n / k;
        result++;
        if (quotient != 0) {
            n = quotient;
        } else {
            break;
        }
    }

    cout << result << endl;
    return 0;
}