#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, A;
    cin >> H >> A;

    int ans = (H % A == 0) ? (H / A) : ((H / A) + 1);

    cout << ans << endl;
    return 0;
}