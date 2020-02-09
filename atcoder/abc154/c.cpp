#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec;
    set<int> numbers;

    int a;
    for(int i=0; i<N; i++) {
        cin >> a;
        vec.push_back(a);
        numbers.insert(a);
    }

    if (vec.size() == numbers.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}