#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1;
    double x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double x = abs(x1 - x2);
    double y = abs(y1 - y2);

    double dist = sqrt(x*x + y*y);

    printf("%.4f\n", dist);
    return 0;
}