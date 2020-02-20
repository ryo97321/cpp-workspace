#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    while(!(x == 0 && y == 0)) {
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        cout << x << " " << y << endl;
        cin >> x >> y;
    }

    return 0;
}