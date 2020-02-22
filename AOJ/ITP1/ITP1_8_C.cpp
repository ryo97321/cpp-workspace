#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main() {
    map<char, int> m;
    m['a'] = 0;
    m['b'] = 0;
    m['c'] = 0;
    m['d'] = 0;
    m['e'] = 0;
    m['f'] = 0;
    m['g'] = 0;
    m['h'] = 0;
    m['i'] = 0;
    m['j'] = 0;
    m['k'] = 0;
    m['l'] = 0;
    m['m'] = 0;
    m['n'] = 0;
    m['o'] = 0;
    m['p'] = 0;
    m['q'] = 0;
    m['r'] = 0;
    m['s'] = 0;
    m['t'] = 0;
    m['u'] = 0;
    m['v'] = 0;
    m['w'] = 0;
    m['x'] = 0;
    m['y'] = 0;
    m['z'] = 0;

    char c;
    while(cin >> c) {
        if(isalpha(c)) {
            if(isupper(c)) c = tolower(c);
            m[c] += 1;
        }
    }

    cout << "a : " << m['a'] << endl;
    cout << "b : " << m['b'] << endl;
    cout << "c : " << m['c'] << endl;
    cout << "d : " << m['d'] << endl;
    cout << "e : " << m['e'] << endl;
    cout << "f : " << m['f'] << endl;
    cout << "g : " << m['g'] << endl;
    cout << "h : " << m['h'] << endl;
    cout << "i : " << m['i'] << endl;
    cout << "j : " << m['j'] << endl;
    cout << "k : " << m['k'] << endl;
    cout << "l : " << m['l'] << endl;
    cout << "m : " << m['m'] << endl;
    cout << "n : " << m['n'] << endl;
    cout << "o : " << m['o'] << endl;
    cout << "p : " << m['p'] << endl;
    cout << "q : " << m['q'] << endl;
    cout << "r : " << m['r'] << endl;
    cout << "s : " << m['s'] << endl;
    cout << "t : " << m['t'] << endl;
    cout << "u : " << m['u'] << endl;
    cout << "v : " << m['v'] << endl;
    cout << "w : " << m['w'] << endl;
    cout << "x : " << m['x'] << endl;
    cout << "y : " << m['y'] << endl;
    cout << "z : " << m['z'] << endl;

    return 0;
}