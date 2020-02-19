#include <bits/stdc++.h>
using namespace std;

int main() {
		int n;
		cin >> n;

		while(n != 0) {
			int dp[n+1];

			// 初期化
			for(int i=0; i<=n; i++) dp[i] = 0;
			
			// 初期条件
			dp[0] = 1;
			
			// ループ
			for(int i=1; i<=n; i++) {
					dp[i] += dp[i-1];
					if (i >= 2) dp[i] += dp[i-2];
					if (i >= 3) dp[i] += dp[i-3];
			}

			// 必要な年数を計算
			int year = (dp[n] % 3650 == 0) ? (dp[n] / 3650) : (dp[n] / 3650 + 1);
			cout << year << endl;
				
			cin >> n;			
		}

		return 0;
}
