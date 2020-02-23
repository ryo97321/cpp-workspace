#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n);
    vector<double> y(n);

    for(int i=0; i<n; ++i) cin >> x[i];
    for(int i=0; i<n; ++i) cin >> y[i];

    double sum = 0.0;
    double manhattan_dist = 0.0;
    for(int i=0; i<n; ++i) {
        sum += abs(x[i] - y[i]);
    }
    manhattan_dist = sum;

    sum = 0.0;
    double euclid_dist = 0.0;
    for(int i=0; i<n; ++i) {
        double diff = abs(x[i] - y[i]);
        sum += pow(diff, 2.0);
    }
    euclid_dist = sqrt(sum);

    sum = 0.0;
    double dist_p_3 = 0.0;
    for(int i=0; i<n; ++i) {
        double diff = abs(x[i] - y[i]);
        sum += pow(diff, 3.0);
    }
    dist_p_3 = cbrt(sum);

    double max_diff = -1;
    double chebyshev_dist = 0.0;
    for(int i=0; i<n; ++i) {
        double diff = abs(x[i] - y[i]);
        if (diff > max_diff) max_diff = diff;
    }
    chebyshev_dist = max_diff;

    printf("%.12f\n", manhattan_dist);
    printf("%.12f\n", euclid_dist);
    printf("%.12f\n", dist_p_3);
    printf("%.12f\n", chebyshev_dist);

    return 0;
}