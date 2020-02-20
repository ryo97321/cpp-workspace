#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }
        if (x % 10 == 3) {
            cout << " " << i;
            continue;
        }

        bool flag = true;
        while(flag) {
            x /= 10;
            if (x) {
                if (x % 10 == 3) {
                    cout << " " << i;
                    flag = false;
                }
            } else {
                flag = false;
            }
        }
    }

    cout << endl;
    return 0;
}