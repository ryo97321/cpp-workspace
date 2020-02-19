#include <bits/stdc++.h>
using namespace std;

int main() {
		int N, K;
		cin >> N >> K;

		int result = 1;

		for(int i=0; i<N; i++) {
			if ((result * 2) < (result + K)) {
					result *= 2;
			} else {
					result += K;
			}
		}

		cout << result << endl;
		return 0;
}
