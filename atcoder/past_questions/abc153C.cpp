#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    long long total = 0;
    
    if (K == 0) {
        for(int i=0; i<N; i++) {
            total += vec[i];
        }
    } else {
        for(int i=K; i<N; i++) {
            total += vec[i];
        }
    }

    cout << total << endl;
    return 0;
}