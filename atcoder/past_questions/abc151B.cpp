#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> K >> M;

    vector<double> a(N);
    for(int i=0; i<N-1; ++i) cin >> a[i];

    double a_sum = 0.0;
    for (int i=0; i<a.size(); ++i) a_sum += a[i];
    double a_ave = a_sum / (double)(a.size());

    double m_sum = (double)M * (double)N;

    double diff = m_sum - a_sum;

    if (diff > (double)K) {
        cout << "-1" << endl;
    } else {
        if (diff < 0) diff = 0;
        cout << diff << endl;
    }
    
    return 0;
}