#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	return c - '0';
}

int main() {
		string N;
		cin >> N;

		int N_i = stoi(N);

		int sum = 0;
		for(int i=0; i<N.size(); i++) {
			sum += ctoi(N[i]);
		}

		bool is_harshad = false;

		if (N_i % sum == 0) {
				is_harshad = true;
		}

		if (is_harshad) {
				cout << "Yes" << endl;
		} else {
				cout << "No" << endl;
		}

		return 0;
}
