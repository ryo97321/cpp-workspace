#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rice_cake;
    set<int> rice_cakes;
    for(int i=0; i<N; i++) {
        cin >> rice_cake;
        rice_cakes.insert(rice_cake);
    }

    cout << rice_cakes.size() << endl;
}