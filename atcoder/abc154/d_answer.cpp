#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }
    for(int i=0; i<n; i++) {
        p[i]++;
    }

    int mx = 0;
    int s = 0;
    queue<int> q;

    for(int i=0; i<n; i++) {
        s += p[i];
        q.push(p[i]);

        if (q.size() > k) {
            s -= q.front(); q.pop();
        }

        if (q.size() == k) {
            mx = max(mx, s);
        }
    }

    double ans = mx;
    ans /= 2;

    printf("%.10f\n", ans);
    return 0;
}