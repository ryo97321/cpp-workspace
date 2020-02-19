#include <bits/stdc++.h>
using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    int A, B;
    cin >> A >> B;

    map<string, int> m;
    m[S] = A;
    m[T] = B;

    string U;
    cin >> U;
    m[U] -= 1;

    cout << m[S] << " " << m[T] << endl;

    return 0;
}