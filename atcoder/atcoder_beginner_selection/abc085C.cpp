#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0; i<=3; i++) {
        for(int j=0; j<=(3-i); j++) {
            for(int k=0; k<=(3-i-j); k++) {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    cout << endl;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }    
}