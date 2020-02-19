#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> vec((N+1), 0);

    int a, b;
    for(int i=0; i<M; i++) {
        cin >> a >> b;
        vec[a] += 1;
        vec[b] += 1;
    }

    for(int i=1; i<=N; i++) {
        cout << vec[i] << endl;
    }

    return 0;
}