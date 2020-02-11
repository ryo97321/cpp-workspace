#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> ps(N, 0);
    vector<double> p_means(N, 0.0);
    vector<double> p_mean_sums(N, 0.0);

    for (int i=0; i<N; i++) {
        int p;
        cin >> p;
        ps[i] = p;
    }

    // 期待値の前計算
    for (int i=0; i<N; i++) {
        double p_mean = (1.0 + (double)ps[i]) / 2.0;
        p_means[i] = p_mean;
    }

    // 累積和の前計算
    for (int i=0; i<N; i++) {
        if (i == 0) {
            p_mean_sums[i] = p_means[i];
        } else {
            p_mean_sums[i] = p_means[i] + p_mean_sums[i-1];
        }
    }

    // 隣接するK個の期待値の合計値
    double max = -1.0;
    for (int i=0; i<N-K; i++) {
        if ((p_mean_sums[i+K] - p_mean_sums[i]) > max) {
            max = p_mean_sums[i+K] - p_mean_sums[i];
        }
    }

    cout << max << endl;
    return 0;
}