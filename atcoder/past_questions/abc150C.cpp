#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];

    vector<int> a(n);
    for(int i=0; i<n; i++) a[i] = i+1;

    map<vector<int>, int> mp;
    do {
        mp[a] = mp.size();
    } while (next_permutation(a.begin(), a.end()));

    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
    return 0;
}