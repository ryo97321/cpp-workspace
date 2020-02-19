#include <bits/stdc++.h>
using namespace std;

// true -> 壊れている, false -> 壊れていない
bool a[110000];

long long dp[110000];

int main() {
		int N, M;
		cin >> N >> M;

		for (int i=0; i<110000; ++i) a[i] = false;
		for (int i=0; i<M; ++i) {
			int bad;
			cin >> bad;
			a[bad] = true;
		}

		// 初期化
		for (int i=0; i<110000; ++i) dp[i] = 0;

		// 初期条件
		dp[0] = 1;

		// ループ
		for (int i=1; i<=N; i++) {
			if (a[i] == true) continue;
			if (a[i-1] == false) dp[i] += dp[i-1];
			if (i > 1) {
				if (a[i-2] == false) dp[i] += dp[i-2];
			}

			dp[i] %= 1000000007;
		}

		cout << dp[N] << endl;
		return 0;
}
