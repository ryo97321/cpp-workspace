#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int count = 0;
    int i = 0;
    while(i < S.size()) {
        i = S.find("ABC", i);
        if (i == -1) break;
        else {
            count++;
            i += 3;
            if (i >= S.size()) break;
        }
    }

    cout << count << endl;
    return 0;
}