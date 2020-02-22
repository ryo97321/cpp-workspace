#include <iostream>
using namespace std;

int main() {
    string s;
    string p;
    cin >> s;
    cin >> p;

    string s_twice = s + s;

    bool can_p_create = false;
    string result;
    for(int i=0; i<s_twice.size()-p.size()+1; ++i) {
        result = "";
        for(int j=0; j<p.size(); ++j) {
            char c = s_twice[i+j];
            string c_str = {c};     // char -> string
            result += c_str;
        }
        if(result == p) {
            can_p_create = true;
            break;
        }
    }

    if(can_p_create) cout << "Yes" << endl;
    else cout << "No" << endl; 
    
    return 0;
}