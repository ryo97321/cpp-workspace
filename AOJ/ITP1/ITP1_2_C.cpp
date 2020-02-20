#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(3);
    for(int i=0; i<3; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size()-1) cout << " ";
    }
    cout << endl;

    return 0;
}