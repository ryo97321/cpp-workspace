#include <bits/stdc++.h>
using namespace std;

int main() {
		int N, A, B;
		cin >> N >> A >> B;
		
		int park_fee = ((A * N) >= B) ? B : (A * N);
		cout << park_fee << endl;

		return 0;
}
