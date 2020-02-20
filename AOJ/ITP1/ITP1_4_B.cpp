#include <iostream>
using namespace std;

#define PI 3.14159265359

int main() {
    double r;
    cin >> r;

    double s = r * r * PI;
    double circumference = 2.0 * PI * r;

    printf("%.6f %.6f\n", s, circumference);
    return 0;
}