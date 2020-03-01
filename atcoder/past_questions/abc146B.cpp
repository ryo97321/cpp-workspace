#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); ++i) {
        int rot = s[i] + n;
        if (rot > 90) rot -= 26;
        cout << (char)(rot);
    }
    cout << endl;
    
    return 0;
}