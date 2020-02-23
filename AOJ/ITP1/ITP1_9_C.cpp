#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int taro_point = 0;
    int hanako_point = 0;
    vector<string> cards(2);

    for(int i=0; i<n; ++i) {
        string taro, hanako;
        cin >> taro >> hanako;

        if (taro == hanako) {
            taro_point++;
            hanako_point++;
        } else {
            cards[0] = taro;
            cards[1] = hanako;
            sort(cards.begin(), cards.end());
            if (cards[1] == taro) {
                taro_point += 3;
            } else if (cards[1] == hanako) {
                hanako_point += 3;
            }
        }
    }

    cout << taro_point << " " << hanako_point << endl;
    return 0;
}