#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<char> pattern(2);
    pattern[0] = '#';
    pattern[1] = '.';

    while(!(H == 0 && W == 0)) {
        for(int i=0; i<H; ++i) {
            for(int j=0; j<W; ++j) {
                cout << pattern[(i+j)%2];
            }
            cout << endl;
        }
        cout << endl;

        cin >> H >> W;
    }

    return 0;
}