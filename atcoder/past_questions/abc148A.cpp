#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for(int i=1; i<=3; i++) {
        if (i == A || i == B) continue;
        else {
            cout << i << endl;
            break;
        }
    }

    return 0;
}