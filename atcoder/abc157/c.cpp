#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool exist = true;        // 答えが存在するか
    int ans = 0;

    vector<int> n_vec(n, 0);

    if(n == 1) {
        for(int i=0; i<m; ++i) {
            int s, c;
            cin >> s >> c;

            // 二回目以降の書き換えはfalse
            if (n_vec[s-1] != 0 && n_vec[s-1] != c) {
                exist = false;
                break;
            }

            n_vec[s-1] = c;
        }

        ans = n_vec[0];
    } else {
        for(int i=0; i<m; ++i) {
            int s, c;
            cin >> s >> c;

            // 二回目以降の書き換えはfalse
            if (n_vec[s-1] != 0 && n_vec[s-1] != c) {
                exist = false;
                break;
            }

            // 1桁目が0という条件が来たらfalse
            if(s == 1 && c == 0) {
                exist = false;
                break;
            }
            n_vec[s-1] = c;
        }


        if(exist == true) {
            for(int i=n_vec.size()-1; i>=0; --i) {
                if(i == n_vec.size()-1 && n_vec[n_vec.size()-i-1] == 0) {
                    ans += 1 * (int)(pow(10, i));
                    continue;
                }

                ans += n_vec[n_vec.size()-i-1] * (int)(pow(10, i));
            }
        } else {
            ans = -1;
        }
    }


    cout << ans << endl;
    return 0;
}