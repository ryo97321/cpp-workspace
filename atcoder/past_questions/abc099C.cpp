#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> sixs;
    vector<int> nines;

    int i = 1;
    while (true) {
        if (pow(6, i) > N) break;
        sixs.push_back(pow(6, i));
        i++;
    }
    reverse(sixs.begin(), sixs.end());

    i = 1;
    while (true) {
        if (pow(9, i) > N) break;
        nines.push_back(pow(9, i));
        i++;
    }
    reverse(nines.begin(), nines.end());

    vector<int> moneys;
    moneys.push_back(1);
    for(int i=0; i<sixs.size(); i++) moneys.push_back(sixs[i]);
    for(int i=0; i<nines.size(); i++) moneys.push_back(nines[i]);

    sort(moneys.begin(), moneys.end());
    moneys.erase(unique(moneys.begin(), moneys.end()), moneys.end());
    reverse(moneys.begin(), moneys.end());

    int count = 0;
    while (true) {
        for(int i=0; i<moneys.size(); i++) {
            if (N - moneys[i] < 0) {
                continue;
            } else {
                N -= moneys[i];
                count++;
                break;
            }
        }
        if (N == 0) break;
    }

    cout << count << endl;
    return 0;
}