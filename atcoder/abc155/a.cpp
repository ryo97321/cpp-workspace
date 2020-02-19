#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    set<int> abc;

    abc.insert(a);
    abc.insert(b);
    abc.insert(c);

    if (abc.size() == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}