#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m, 0));
    vector<int> b(m, 0);

    // A 読み込み
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            cin >> A[i][j];
        }
    }

    // b 読み込み
    for(int i=0; i<m; ++i) cin >> b[i];

    vector<int> ans(n, 0);
    
    // 行列計算
    for(int i=0; i<n; ++i) {
        int sum = 0;
        for(int j=0; j<m; ++j) {
            sum += (A[i][j] * b[j]);
        }
        ans[i] = sum;
    }

    // 結果表示
    for(int i=0; i<ans.size(); ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}