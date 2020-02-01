#include <bits/stdc++.h>
using namespace std;

int main() {
    using pii = pair<int, int>;

    pii p = make_pair(1, 2);
    cout << p.first << " " << p.second << endl;

    p = pii(3, 4);
    cout << p.first << " " << p.second << endl;
}