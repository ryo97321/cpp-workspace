#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i=0; i<N; i++) {
        cin >> vec[i];
    }

    int count = 0;
    bool flag = true;

    while (flag) {
        for (int i=0; i<N; i++) {
            if (vec[i] % 2 == 0) {
                vec[i] /= 2;
                if (i == N-1)
                    count += 1;
            } else {
                flag = false;
                break;
            }
        }
    }

    cout << count << endl;

}