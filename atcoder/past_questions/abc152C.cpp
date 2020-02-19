#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);

    for(int i=0; i<n; i++) cin >> p[i];

    int ans = 0;
    int curMin = 1e9;

    for(int i=0; i<n; i++) {
        curMin = min(curMin, p[i]);
        if (curMin == p[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}