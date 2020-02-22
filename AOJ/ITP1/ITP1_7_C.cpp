#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> vec(r+1, vector<int>(c+1, 0));

    for(int i=0; i<r; ++i) {
        for(int j=0; j<c; ++j) {
            cin >> vec[i][j];
        }
    }

    int vec_r_c = 0;
    for(int i=0; i<r; ++i) {
        int row_sum = 0;
        for(int j=0; j<c; ++j) {
            row_sum += vec[i][j];
        }
        vec[i][c] = row_sum;
        vec_r_c += row_sum;
    }

    vec[r][c] = vec_r_c;

    for(int j=0; j<c; ++j) {
        int col_sum = 0;
        for(int i=0; i<r; ++i) {
            col_sum += vec[i][j];
        }
        vec[r][j] = col_sum;
    }

    for(int i=0; i<r+1; ++i) {
        for(int j=0; j<c+1; ++j) {
            cout << vec[i][j];
            if (j != c) cout << " ";
        }
        cout << endl;
    }

    return 0;
}