#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(6);
    for(int i=0; i<6; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    cout << vec[2] << endl;
    return 0;
}