#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> vec(10);
    int vec_i = -1;

    int h;
    int m;
    while(s != "-") {
        if (s.size() > 1) {
            vec_i++;
            vec[vec_i] = s;
            cin >> m;
            for(int i=0; i<m; ++i) {
                cin >> h;
                vec[vec_i] = vec[vec_i].substr(h, vec[vec_i].size()-h) + vec[vec_i].substr(0, h);
            }
        }
        cin >> s;
    }

    for(int i=0; i<=vec_i; ++i) {
        cout << vec[i] << endl;
    }

    return 0;
}