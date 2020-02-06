#include <bits/stdc++.h>
using namespace std;

int main() {
		int N;
		cin >> N;

		int sum = 0;
		for(int i=0; i<N; i++) {
			int start, end;
			cin >> start >> end;
			sum += (end - start + 1);
		}

		cout << sum << endl;
		return 0;
}
