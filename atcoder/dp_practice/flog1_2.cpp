#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;

long long h[110000];
long long dp[110000];

int main() {
		int N;
		cin >> N;

		for (int i=0; i<N; i++) cin >> h[i];

		for (int i=0; i<110000; i++) dp[i] = INF;

		dp[0] = 0;

		for (int i=0; i<N; i++) {
				chmin(dp[i+1], dp[i] + abs(h[i] - h[i+1]));
				chmin(dp[i+2], dp[i] + abs(h[i] - h[i+2]));
		}

		cout << dp[N-1] << endl;
		return 0;
}
