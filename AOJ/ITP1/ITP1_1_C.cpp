#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int s = a * b;
    int around = (a + b) * 2;

    cout << s << " " << around << endl;
    return 0;
}