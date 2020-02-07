#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec(3);

    for(int i=0; i<3; i++) {
        cin >> vec[i];
    }

    string result = "";
    for(int i=0; i<vec.size(); i++) {
        result += vec[i].at(0);
    }

    cout << result << endl;
    return 0;
}