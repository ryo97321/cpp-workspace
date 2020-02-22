#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string result = "";

    for(int i=0; i<s.size(); ++i) {
        char c = s[i];
        if (isalpha(c)) {
            if (islower(c)) {
                char c_upper = toupper(c);
                string c_upper_str = {c_upper};
                result += c_upper_str;
            } else if (isupper(c)) {
                char c_lower = tolower(c);
                string c_lower_str = {c_lower};
                result += c_lower_str;
            }
        } else {
            string c_str = {c};
            result += c_str;
        }
    }

    cout << result << endl;
    return 0;
}