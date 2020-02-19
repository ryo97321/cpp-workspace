#include <bits/stdc++.h>
using namespace std;

int main() {
		int N, A;
		cin >> N >> A;

		int rem = N % 500;

		if (rem <= A) {
				cout << "Yes" << endl;
		} else {
				cout << "No" << endl;
		}

		return 0;
}
