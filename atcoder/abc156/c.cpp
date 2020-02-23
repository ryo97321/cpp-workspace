#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n+1, 0);
    for(int i=1; i<=n; ++i) {
        cin >> vec[i];
    }

    int min_sum = 1e9;
    for(int i=1; i<=100; ++i) {
        int vec_sum = 0;
        for(int j=1; j<=n; ++j) {
            vec_sum += (abs(vec[j] - i) * abs(vec[j] - i));
        }
        if (vec_sum < min_sum) min_sum = vec_sum;
    }

    cout << min_sum << endl;
    return 0;
}