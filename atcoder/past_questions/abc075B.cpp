#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
    return c - '0';
}

char itoc(int i) {
    return '0' + i;
}

bool isMine(vector<vector<char>> &table, int i, int j) {
    if (table[i][j] == '#') {
        return true;
    } else {
        return false;
    }
}

void addNumber(vector<vector<char>> &table, int i, int j) {
    int H = table.size();
    int W = table[0].size();

    // 上の行の更新
    for(int dj=-1; dj<=1; dj++) {
        // 範囲外ならbreak
        if((i - 1) < 0) {
            break;
        }

        if(((j+dj) < 0) || ((j+dj) >= W)) {
            continue;
        } else {
            if (isMine(table, (i-1), (j+dj))) {
                continue;
            } else {
                int now = ctoi(table[i-1][j+dj]);
                table[i-1][j+dj] = itoc(now + 1);
            }
        }
    }

    // 左の更新
    if((j-1) >= 0) {
        if(isMine(table, i, (j-1)) == false) {
            int now = ctoi(table[i][j-1]);
            table[i][j-1] = itoc(now + 1);
        }
    }

    // 右の更新
    if((j+1) < W) {
        if(isMine(table, i, (j+1)) == false) {
            int now = ctoi(table[i][j+1]);
            table[i][j+1] = itoc(now + 1);
        }
    }

    // 自分の下の行の更新
    for(int dj=-1; dj<=1; dj++) {
        // 範囲外ならbreak
        if((i + 1) >= H) {
            break;
        }

        if(((j+dj)<0) || ((j+dj)>=W)) {
            continue;
        } else {
            if(isMine(table, (i+1), (j+dj))) {
                continue;
            } else {
                int now = ctoi(table[i+1][j+dj]);
                table[i+1][j+dj] = itoc(now + 1);
            }
        }
    }

}

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> table(H, vector<char>(W));
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            table[i][j] = '0';
        }
    }

    for(int i=0; i<H; i++) {
        string S;
        cin >> S;

        for(int j=0; j<S.size(); j++) {
            if (S[j] == '#') {
                table[i][j] = '#';
                addNumber(table, i, j);
            }
        }
    }

    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cout << table[i][j];
        }
        cout << endl;
    }
}