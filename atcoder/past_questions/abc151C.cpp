#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int penalty_count = 0;
    int correct_count = 0;

    vector<int> wa_count(N+1, 0);

    map<long long, string> m;
    long long p;      // 1 <= p <= 10e5
    string s;   // "AC" or "WA"

    for (int i=0; i<M; ++i) {
        cin >> p >> s;

        if (m.count(p)) {
            if (m[p] == "WA") {
                if (s == "WA") {
                    penalty_count++;
                    wa_count[p]++;
                }
                else if (s == "AC") {
                    correct_count++;
                    m[p] = s;
                }
            }
        } else {
            if (s == "WA") {
                penalty_count++;
                wa_count[p]++;
            } else if (s == "AC") {
                correct_count++;
            }
            m[p] = s;
        }
    }

    // 一回もACが出なかった問題のpenalty_countを減らす
    for(int i=0; i<wa_count.size(); i++) {
        if (wa_count[i] > 0) {
            if (m[i] == "WA") {
                penalty_count -= wa_count[i];
            }
        }
    }

    cout << correct_count << " " << penalty_count << endl;
    return 0;
}