#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

long long a[100010];
long long dp[100010];

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++) cin >> a[i];
    
    // 初期化
    for(int i=0; i<N; i++) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for(int i=1; i<N; i++) {
        chmin(dp[i], dp[i-1] + abs(a[i] - a[i - 1]));
        if (i > 1) chmin(dp[i], dp[i-2] + abs(a[i] - a[i - 2]));
    }

    cout << dp[N-1] << endl;
    return 0;
}