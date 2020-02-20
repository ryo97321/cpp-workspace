#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, vector<int>> m;
    for(int i=0; i<=13; ++i) m['S'].push_back(0);
    for(int i=0; i<=13; ++i) m['H'].push_back(0);
    for(int i=0; i<=13; ++i) m['C'].push_back(0);
    for(int i=0; i<=13; ++i) m['D'].push_back(0);

    for(int i=0; i<n; ++i) {
        char s;
        int x;
        cin >> s >> x;
        m[s][x] = 1;
    }

    for(int i=1; i<=13; ++i) {
        if (m['S'][i] == 0) cout << 'S' << " " << i << endl;
    }
    for(int i=1; i<=13; ++i) {
        if (m['H'][i] == 0) cout << 'H' << " " << i << endl;
    }
    for(int i=1; i<=13; ++i) {
        if (m['C'][i] == 0) cout << 'C' << " " << i << endl;
    }
    for(int i=1; i<=13; ++i) {
        if (m['D'][i] == 0) cout << 'D' << " " << i << endl;
    }

    return 0;
}