#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll A, ll B) {

    if (A < B) {
        ll tmp = A;
        A = B;
        B = tmp;
    }

    ll r = A % B;
    while(r != 0) {
        A = B;
        B = r;
        r = A % B;
    }

    return B;
}

ll lcm(ll A, ll B) {
    ll ab_gcd = gcd(A, B);
    return (A * B) / ab_gcd;
}

int main() {
    ll A, B;
    cin >> A >> B;

    ll ans = lcm(A, B);
    cout << ans << endl;

    return 0;
}