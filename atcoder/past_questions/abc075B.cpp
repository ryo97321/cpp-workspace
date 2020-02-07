#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
    return c - '0';
}

char itoc(int i) {
    return '0' + i;
}

void addNumber(vector<vector<char>> &table, int i, int j) {

    int H = table.size();
    int W = table[0].size();

    // 外側より内にある時
    if ((i > 0 && i < W) && (j > 0 && j < H)) {
        // 左上
        char now = table[i-1][j-1];
        table[i-1][j-1] = itoc(ctoi(now) + 1);

        // 上
        now = table[i][j-1];
        table[i][j-1] = itoc(ctoi(now) + 1);
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
}