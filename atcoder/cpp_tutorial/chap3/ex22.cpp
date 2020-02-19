#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> pairs;
    for (int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;
        pairs.push_back(make_pair(b, a));
    }


    sort(pairs.begin(), pairs.end());

    for(int i=0; i<N; i++) {
        cout << pairs[i].second << " " << pairs[i].first << endl;
    }
}