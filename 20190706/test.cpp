#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10);

    for(int i=0; i<10; i++) {
        vec.at(i) = i*10;
    }

    for(int i=0; i<vec.size(); i++) {
        cout << vec.at(i) << endl;
    }

    cout << "Boss" << endl;
}