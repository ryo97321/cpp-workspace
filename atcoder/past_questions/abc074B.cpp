#include <bits/stdc++.h>
using namespace std;

int main() {
		int N, K;
		cin >> N >> K;

		vector<int> x(N);
		for(int i=0; i<N; i++) {
			cin >> x[i];
		}

		int min_move_step = 0;
		for(int i=0; i<N; i++) {
			if ((K - x[i]) < x[i]) {
				min_move_step += (2 * (K - x[i]));
			} else {
				min_move_step += (2 * x[i]);
			}
		}

		cout << min_move_step << endl;
		return 0;
}
