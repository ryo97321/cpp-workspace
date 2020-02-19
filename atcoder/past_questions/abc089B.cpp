#include <bits/stdc++.h>
using namespace std;

int main() {
		int N;
		cin >> N;

		set<string> arare;

		for(int i=0; i<N; i++) {
			string s;
			cin >> s;
			arare.insert(s);
		}
			
		if (arare.size() == 3) {
				cout << "Three" << endl;
		} else if (arare.size() == 4) {
				cout << "Four" << endl;
		}

		return 0;
}
