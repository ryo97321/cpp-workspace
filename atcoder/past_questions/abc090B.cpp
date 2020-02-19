#include <bits/stdc++.h>
using namespace std;

bool check_palindromic_number(int n) {
		string s = to_string(n);
		bool is_palindromic_number = true;

		for(int i=0; i<(s.size()/2); i++) {
			if (s[i] != s[(s.size()-1)-i]) {
					is_palindromic_number = false;
					break;
			}
		}

		return is_palindromic_number;
}

int main() {
		int A, B;
		cin >> A >> B;

		int n_palindromic_number = 0;

		for(int number=A; number<=B; number++) {
			if (check_palindromic_number(number)) {
					n_palindromic_number++;
			}
		}

		cout << n_palindromic_number << endl;
		return 0;
}
