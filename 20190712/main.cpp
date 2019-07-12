#include <iostream>

using namespace std;

int main() {
    string s = "apg4b";
    string &t = s;

    t.at(0) = 'A';
    t.at(1) = 'P';
    t.at(2) = 'G';

    cout << s << endl;
    cout << t << endl;
}