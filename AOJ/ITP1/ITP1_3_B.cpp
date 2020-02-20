#include <iostream>
using namespace std;

int main() {
    int x;
    int count = 0;

    cin >> x;
    count++;

    while (x != 0) {
        cout << "Case " << count << ": " << x << endl;
        cin >> x;
        count++;
    }
    
    return 0;
}