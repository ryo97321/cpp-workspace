#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<vector<int>>> vec(5, vector<vector<int>>(4, vector<int>(11, 0)));

    int ridge;              // 棟
    int floor;              // 階
    int room_number = 0;    // 部屋番号
    int people_number = 0;  // 入居者数
    for(int i=0; i<n; ++i) {
        cin >> ridge >> floor >> room_number >> people_number;
        vec[ridge][floor][room_number] += people_number;
    }

    for(int i=1; i<=4; ++i) {
        for(int j=1; j<=3; ++j) {
            for(int k=1; k<=10; ++k) {
                cout << " " << vec[i][j][k];
            }
            cout << endl;
        }
        if (i != 4) cout << "####################" << endl;
    }

    return 0;
}