#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec((N+1), 0);

    for(int i=1; i<=N; i++) {
        cin >> vec[i];
    }

    int push_number = 1;
    for(int i=1; i<=N; i++) {
        push_number = vec[push_number];
        if(push_number == 2) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}