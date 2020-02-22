#include <iostream>
#include <vector>

using namespace std;

int ctoi(int n) {
    return n - '0';
}

int main() {
    string x;
    cin >> x;

    while(x != "0") {
        int x_total = 0;
        for(int i=0; i<x.size(); ++i) {
            x_total += ctoi(x[i]);
        }

        cout << x_total << endl;
        cin >> x;
    }

    return 0;
}