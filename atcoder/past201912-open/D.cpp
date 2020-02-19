#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N+1);
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        vec[a]++;
    }

    int before = -1;
    int after = -1;
    for(int i=1; i<=N; i++) {
        if (vec[i] == 0) before = i;
        else if (vec[i] == 2) after = i;
    }

    if (before == -1 || after == -1) {
        cout << "Correct" << endl;
    } else {
        cout << after << " " << before << endl;
    }

    return 0;
}