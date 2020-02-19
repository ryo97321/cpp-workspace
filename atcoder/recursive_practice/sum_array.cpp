#include <bits/stdc++.h>
using namespace std;

int array_sum_from_i(vector<int> &data, int i) {
    // ベースケース
    if (i == data.size()) {
        return 0;
    }

    // 再起ステップ
    int s = array_sum_from_i(data, i+1);
    return data.at(i) + s;
}

int array_sum(vector<int> &data) {
    return array_sum_from_i(data, 0);
}

int main() {
    vector<int> a = {0, 3, 9, 1, 5};
    cout << array_sum(a) << endl;
}