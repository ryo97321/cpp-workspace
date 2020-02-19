#include <bits/stdc++.h>
using namespace std;

int main() {
    bitset<8> a("00011011");
    bitset<8> b("00110101");

    auto c = a & b;
    cout << "1: " << c << endl;
    cout << "2: " << (c << 1) << endl;
    cout << "3: " << (c << 2) << endl;
    cout << "4: " << (c << 3) << endl;
    cout << "5: " << (c << 4) << endl;

    c <<= 4;
    c ^= bitset<8>("11010000");
    cout << "6: " << c << endl;

    c.set(1, 1);
    cout << "7: " << c << endl;

    for (int i=7; i>=0; i--) {
        cout << c.test(i) << " ";
    }
    cout << endl;
}