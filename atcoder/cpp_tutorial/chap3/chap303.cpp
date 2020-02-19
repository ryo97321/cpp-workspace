#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {0, 10, 13, 14, 20};
    cout << *lower_bound(a.begin(), a.end(), 12) << endl;

    cout << *lower_bound(a.begin(), a.end(), 14) << endl;

    cout << *upper_bound(a.begin(), a.end(), 10) << endl;
}