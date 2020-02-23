#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        vector<double> vec(n);
        for(int i=0; i<n; ++i) cin >> vec[i];

        double sum = 0.0;
        for(int i=0; i<vec.size(); ++i) {
            sum += vec[i];
        }
        double ave = sum / ((double)vec.size());


        sum = 0.0;
        for(int i=0; i<vec.size(); ++i) {
            double diff = vec[i] - ave;
            sum += (diff * diff);
        }

        double dispersion = sum / ((double)n);
        double standard_deviation = sqrt(dispersion);

        printf("%.12f\n", standard_deviation);

        cin >> n;
    }

    return 0;
}