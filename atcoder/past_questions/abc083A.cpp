#include <bits/stdc++.h>
using namespace std;

int main() {
		int A, B, C, D;
		cin >> A >> B >> C >> D;
		
		int left_sum = A + B;
		int right_sum = C + D;

		string result;
		if (left_sum > right_sum) {
				result = "Left";
		} else if (left_sum == right_sum) {
				result = "Balanced";
		} else {
				result = "Right";
		}

		cout << result << endl;

		return 0;
}
