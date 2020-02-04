#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int Alice = 0;
    int Bob = 0;
    
    for(int i=0; i<N; i++) {
        if (i == 0) {
            Alice += vec[i];
            continue;
        }

        if (i % 2 == 0) {
            Alice += vec[i];
        } else if (i % 2 == 1) {
            Bob += vec[i];
        }
    }

    cout << (Alice - Bob) << endl;
    return 0;
}