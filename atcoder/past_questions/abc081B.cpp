#include <bits/stdc++.h>
using namespace std;

int main() {
		int N;
		cin >> N;
	
		vector<int> A(N);
		for(int i=0; i<N; i++) {
				cin >> A[i];
		}

		int n_divide = 0;
		bool can_divide = true;

		while(can_divide) {
			for(int i=0; i<A.size(); i++) {
				if(A[i] % 2 == 0) {
						A[i] /= 2;
				} else {
						can_divide = false;
						break;
				}
			}

			if (can_divide) {
					n_divide++;
			}
		}

		cout << n_divide << endl;
		return 0;
}
