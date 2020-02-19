#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i=0; i<N; i++) {
        cin >> A.at(i);
    }

    int count = 0;

    while(true) {
        bool allEven = true;

        for(int i=0; i<N; i++) {
            if(A.at(i) % 2 != 0) {
                allEven = false;
                break;
            }
        }

        if(allEven) {
            for(int j=0; j<N; j++) {
                A.at(j) /= 2;
            }
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;
}