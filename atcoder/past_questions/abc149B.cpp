#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    long long tmp_A = A;
    A = A - K;
    if (A < 0) A = 0;

    K = K - tmp_A;
    if (K > 0) {
        B -= K;
        if (B < 0) B = 0;
        K -= B;
    }

    cout << A << " " << B << endl;
    return 0;
}