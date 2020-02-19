#include <bits/stdc++.h>
using namespace std;

int main() {
		int N;
		cin >> N;

		bool is_good = false;

		for(int i=1; i<=9; i++) {
			if (N == (111*i)) {
					is_good = true;
					break;
			}
			if ((N >= (1110*i)) && (N <= ((1110*i)+9))) {
					is_good = true;
					break;
			}
		}

		for(int i=0; i<=9; i++) {
				for(int j=1; j<=9; j++) {
					if (N == ((1000*i)+(111*j))) {
							is_good = true;
							break;
					}
				}
				if (is_good) {
						break;
				}
		}

		for(int i=1; i<=9; i++) {
			if (N == (1000*i)) {
					is_good = true;
					break;
			}
		}

		if (is_good) {
				cout << "Yes" << endl;
		} else {
				cout << "No" << endl;
		}

		return 0;
}
