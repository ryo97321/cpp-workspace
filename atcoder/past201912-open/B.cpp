#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    vector<ll> vec(N);
    for(int i=0; i<N; i++) cin >> vec[i];

    string s;
    long long diff;
    for(int i=1; i<N; i++) {
        diff = vec[i] - vec[i-1];
        if (diff > 0) s = "up";
        else if (diff < 0) s = "down";
        else if (diff == 0) s = "stay";

        if (s == "stay") cout << s << endl;
        else cout << s << " " << abs(diff) << endl;
    }

    return 0;
}