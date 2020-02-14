#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;

int main() {
    int N; 
    cin >> N;

    vector<long long> dp(110000);
    for(int i=0; i<110000; i++) dp[i] = INF;

    dp[0] = 0;
    for(int i=1; i<=N; i++) {
        for(int pow6=1; pow6<=i; pow6*=6) {
            chmin(dp[i], dp[i-pow6] + 1);
        }
        for(int pow9=1; pow9<=i; pow9*=9) {
            chmin(dp[i], dp[i-pow9] + 1);
        }
    }

    cout << dp[N] << endl;
    return 0;
}