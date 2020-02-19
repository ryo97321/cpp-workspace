#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool S_has_low_alphabet = false;
    for(int i=0; i<S.size(); i++) {
        if (!isdigit(S[i])) S_has_low_alphabet = true;
    }

    if (S_has_low_alphabet) {
        cout << "error" << endl;
    } else {
        int S_i = stoi(S);
        int ans = S_i * 2;
        cout << ans << endl;
    }

    return 0;
}