#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    int c_i = (int)c;
    
    int next_c_i = c_i + 1;
    if (next_c_i > 122) next_c_i -= 26;

    char next_c = (char)next_c_i;

    cout << next_c << endl;
    return 0;
}