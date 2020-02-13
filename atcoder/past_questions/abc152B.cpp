#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<string> vec(2);

    string s;
    for (int i=0; i<b; i++) {
        s += to_string(a);
    }
    vec[0] = s;

    s = "";
    for (int i=0; i<a; i++) {
        s += to_string(b);
    }
    vec[1] = s;

    sort(vec.begin(), vec.end());
    cout << vec[0] << endl;

    return 0;
}