#include <bits/stdc++.h>
using namespace std;

#define ll long long

// memo

// A * N + B * d(N)
// N:10 = A * 10 + B * 2
// N:100 = A * 100 + B * 3
// N:1000 = A * 1000 + B * 4
// N:10000 = A * 10000 + B * 5
// N:100000 = A * 100000 + B * 6
// N:1000000 = A * 1000000 + B * 7
// N:10000000 = A * 10000000 + B * 8
// N:100000000 = A * 100000000 + B * 9
// N:1000000000 = A * 1000000000 + B * 10

// 二分探索 で絞り込んでいく(logN)

int main() {
    ll A, B, X;
    cin >> A >> B >> X;


    ll max_price = -1;
    ll right = X;
    ll left = 0;

    while(left <= right) {
        ll mid = (right + left) / 2;
        ll mid_result = A * mid + B * to_string(mid).size();

        if (mid_result <= X) max_price = mid_result;

        // left_result と right_result を計算
        ll left_result = A * left + B * to_string(left).size();
        ll right_result = A * right + B * to_string(right).size();

        // left_result <= X <= mid_result なら, right = mid-1;
        // mid_result <= X <= right_result なら, left = mid+1;
        if (left_result < X && X < mid_result) {
            right = mid - 1;
        } else if (mid_result < X && X < right_result) {
            left = mid + 1;
        }

        if (mid == right || mid == left) {
            break;
        }

        cout << left << " " << mid << " " << right << endl;
    }

    if (max_price == -1) {
        max_price = 0;
    }

    cout << max_price << endl;
    return 0;
}