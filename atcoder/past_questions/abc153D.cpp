#include <bits/stdc++.h>
using namespace std;

long long f(int H) {
    if (H == 1) {
        return 1;
    } else {
        return 2 * f(H/2) + 1;
    }
}

int main() {
    long long H;
    cin >> H;
    long long count = f(H);

    cout << count << endl;
    return 0;
}