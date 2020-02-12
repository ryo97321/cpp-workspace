#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    vector<int> vec(N);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    int total = 0;
    for(int i=0; i<N; i++) {
        total += vec[i];
    }

    if (total >= H) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}