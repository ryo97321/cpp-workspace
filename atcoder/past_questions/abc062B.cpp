#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> img(H+2, vector<char>(W+2));

    // img initialize
    for(int y=0; y<img.size(); y++) {
        for(int x=0; x<img[0].size(); x++) {
            img[y][x] = '#';
        }
    }

    for(int i=0; i<H; i++) {
        int y = (i + 1);
        string s;
        cin >> s;

        for(int j=0; j<s.size(); j++) {
            int x = (j + 1);
            img[y][x] = s.at(j);
        }
    }

    for(int y=0; y<img.size(); y++) {
        for(int x=0; x<img[0].size(); x++) {
            cout << img[y][x];
        }
        cout << endl;
    }

    return 0;
}