#include <iostream>
#include <cctype>
using namespace std;

string string_to_upper(string s) {
    string s_upper = "";
    char c;
    for(int i=0; i<s.size(); i++) {
        c = s[i];
        if(isalpha(c)) {
            if(isupper(c)) {
                c = tolower(c);
            }
        }
        string c_str = {c};
        s_upper += c_str;
    }

    return s_upper;
}

int main() {
    int w_count = 0;
    string w;
    cin >> w;

    string s;
    cin >> s;
    while(s != "END_OF_TEXT") {
        s = string_to_upper(s);
        if (w == s) w_count++;
        cin >> s;
    }

    cout << w_count << endl;
    return 0;
}