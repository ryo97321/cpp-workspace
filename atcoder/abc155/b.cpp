#include <bits/stdc++.h>
using namespace std;

int main() {
    bool enter_flag = true;

    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    for(int i=0; i<n; i++) {
        if (vec[i] % 2 == 1) continue;
        else if (vec[i] % 2 == 0) {
            if (vec[i] % 3 != 0 && vec[i] % 5 != 0) {
                enter_flag = false;
                break;
            }
        }
    }

    if (enter_flag) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;

    return 0;
}