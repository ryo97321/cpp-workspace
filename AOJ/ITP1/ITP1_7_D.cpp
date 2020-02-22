#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<ll>> A(n, vector<ll>(m, 0));
    vector<vector<ll>> B(m, vector<ll>(l, 0));
    vector<vector<ll>> C(n, vector<ll>(l, 0));

    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            cin >> A[i][j];
        }
    }

    for(int i=0; i<m; ++i) {
        for(int j=0; j<l; ++j) {
            cin >> B[i][j];
        }
    }

    ll sum;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<l; ++j) {
            sum = 0;
            for(int k=0; k<m; ++k) {
                sum += (A[i][k] * B[k][j]);
            }
            C[i][j] = sum;
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<l; ++j) {
            cout << C[i][j];
            if (j != l-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}