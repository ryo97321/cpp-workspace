#include <bits/stdc++.h>
using namespace std;

bool check_bingo(vector<vector<bool>> &check_sheet) {
    bool result = false;

    for(int i=0; i<3; ++i) {
        if(check_sheet[i][0] == true && check_sheet[i][1] == true && check_sheet[i][2] == true) {
            result = true;
            break;
        }

        if(check_sheet[0][i] == true && check_sheet[1][i] == true && check_sheet[2][i] == true) {
            result = true;
            break;
        }
    }

    if(result == false) {
        if(check_sheet[0][0] == true && check_sheet[1][1] == true && check_sheet[2][2] == true) {
            result = true;
        } else if (check_sheet[0][2] == true && check_sheet[1][1] == true && check_sheet[2][0] == true) {
            result = true;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> bingo(3, vector<int>(3, 0));
    vector<vector<bool>> check_sheet(3, vector<bool>(3, false));

    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            cin >> bingo[i][j];
        }
    }

    int n;
    cin >> n;

    for(int i=0; i<n; ++i) {
        int b;
        cin >> b;

        for(int i=0; i<3; ++i) {
            for(int j=0; j<3; ++j) {
                if(b == bingo[i][j]) {
                    check_sheet[i][j] = true;
                }
            }
        }
    }

    bool is_bingo = check_bingo(check_sheet);

    if (is_bingo) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}