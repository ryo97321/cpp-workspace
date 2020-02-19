#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mul = a * b;

    if (mul % 2 == 0) {
        cout << "Even" << endl;
    } else if (mul % 2 == 1) {
        cout << "Odd" << endl;
    }
}