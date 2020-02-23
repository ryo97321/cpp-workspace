#include <iostream>
#include <cmath>
using namespace std;

double PI = 3.14159265358979323846;

int main() {
    double a, b, degree;
    cin >> a >> b >> degree;

    double rad = (degree * PI) / 180.0;

    double s = 0.5 * a * b * sin(rad);
    double l = a + b + (sqrt(a*a + b*b - 2*a*b*cos(rad)));
    double h = (2.0 * s) / a;

    printf("%.11f\n", s);
    printf("%.11f\n", l);
    printf("%.11f\n", h);

    return 0;
}