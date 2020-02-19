#include <bits/stdc++.h>
using namespace std;

double calc_mean(vector<int> &p_vec, int j) {
    int numerator = 0;     // 分子

    if (p_vec[j] == 1) {
        numerator = 1;
    } else {
        if (p_vec[j] % 2 == 0) {
            for(int i=1; i<=(p_vec[j]/2); i++) {
                numerator += (i + (p_vec[j]-i+1));
            }
        } else if (p_vec[j] % 2 == 1) {
            for(int i=1; i<=(p_vec[j]/2); i++) {
                numerator += (i + (p_vec[j]-i+1));

                if (i == (p_vec[j]/2)) {
                    numerator += (i + 1);
                }
            }
        }
    }

    double result = (double)numerator / (double)p_vec[j];
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;

    int p;
    vector<int> p_vec;
    for(int i=0; i<N; i++) {
        cin >> p;
        p_vec.push_back(p);
    }

    double max = -1.0;
    double mean_sum;
    for(int i=0; i<(N-K+1); i++) {
        mean_sum = 0.0;

        for(int j=i; j<i+K; j++) {
            mean_sum += calc_mean(p_vec, j);
        }
        if(mean_sum > max) {
            max = mean_sum;
        }
    }

    cout << max << endl;
    return 0;
}