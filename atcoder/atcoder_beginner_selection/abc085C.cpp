#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;

    int a = -1;     // 10000円の枚数
    int b = -1;     // 5000円の枚数
    int c = -1;     // 1000円の枚数

    for(int i=0; i<=N; i++) {
        for(int j=0; (i+j)<=N; j++) {
            int k = N - i - j;
            int sum = 10000*i + 5000*j + 1000*k;
            if (sum == Y) {
                a = i;
                b = j;
                c = k;
            }
        }
    }

    cout << a << " " << b << " " << c << endl;
}