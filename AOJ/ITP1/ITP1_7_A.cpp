#include <iostream>
using namespace std;

int main() {
    int m, f, r;    // 中間試験の点数 期末試験の点数 再試験の点数
    cin >> m >> f >> r;

    while(!(m == -1 && f == -1 && r == -1)) {
        char rank;
        int sum = m + f;

        if (m == -1 || f == -1) rank = 'F';
        else if (sum >= 80) rank = 'A';
        else if (sum >= 65) rank = 'B';
        else if (sum >= 50) rank = 'C';
        else if (sum >= 30) {
            rank = 'D';
            if (r >= 50) rank = 'C';
        } else if (sum < 30) {
            rank = 'F';
        }

        cout << rank << endl;
        cin >> m >> f >> r;
    }

    return 0;
}