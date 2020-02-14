#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;

long weight[110], value[110];
long long dp[110][1001000] = {0};

int main() {
    int N;
    long long W;
    cin >> N >> W;

    for (int i=0; i<N; ++i) cin >> weight[i] >> value[i];

    for (int i=0; i<N; ++i) {
        for (int sum_w = 0; sum_w <= W; ++sum_w) {
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}