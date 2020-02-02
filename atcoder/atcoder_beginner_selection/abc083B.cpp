#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
    return c - '0';
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> vec;

    int sum;
    for (int number=1; number<=N; number++) {
        sum = 0;
        string number_s = to_string(number);
        for(int i=0; i<number_s.size(); i++) {
            sum += ctoi(number_s[i]);
        }

        if (sum >= A && sum <= B)
            vec.push_back(number);
    }

    int vec_sum = 0;
    for (int i=0; i<vec.size(); i++) {
        vec_sum += vec[i];
    }

    cout << vec_sum << endl;
}