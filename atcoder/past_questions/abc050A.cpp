#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char op;

    cin >> A >> op >> B;

    int result = 0;
    
    if (op == '+') {
        result = A + B;
    } else if (op == '-') {
        result = A - B;
    }

    cout << result << endl;
}