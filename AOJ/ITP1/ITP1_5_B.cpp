#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    while(!(H == 0 && W == 0)) {
        int inner_height = H - 2;
        int inner_width = W - 2;

        for(int i=0; i<W; ++i) cout << "#";
        cout << endl;

        for(int i=0; i<inner_height; ++i) {
            cout << "#";
            for(int j=0; j<inner_width; ++j) {
                cout << ".";
            }
            cout << "#" << endl;
        }

        for(int i=0; i<W; ++i) cout << "#";
        cout << endl;

        cout << endl;

        cin >> H >> W;
    }

    return 0;
}