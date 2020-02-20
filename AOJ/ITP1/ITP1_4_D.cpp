#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    ll a_max = a[a.size()-1];
    ll a_min = a[0];
    
    ll total = 0;
    for(int i=0; i<a.size(); ++i) total += a[i];

    cout << a_min << " " << a_max << " " << total << endl;
    return 0;
}