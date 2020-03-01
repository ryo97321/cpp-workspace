#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["MON"] = 1;
    m["TUE"] = 2;
    m["WED"] = 3;
    m["THU"] = 4;
    m["FRI"] = 5;
    m["SAT"] = 6;
    m["SUN"] = 7;

    string s;
    cin >> s;

    int ans = m["SUN"] - m[s];
    if(ans == 0) ans = 7;

    cout << ans << endl;
    return 0;
}