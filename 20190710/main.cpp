#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data(5);
    for(int i=0; i<5; i++) {
        cin >> data.at(i);
    }

    string result = "NO";
    for(int i=0; i<data.size()-1; i++) {
        if(data.at(i) == data.at(i+1)) {
            result = "YES";
            break;
        }
    }

    cout << result << endl;
}