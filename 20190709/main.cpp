#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> a(3);
    a.at(0) = 0;
    a.at(1) = 1;
    a.at(2) = 2;

    cout << endl;
    cout << a.at(0) << endl;

    cout << "Hello" << endl;
    cout << "World" << endl;

}