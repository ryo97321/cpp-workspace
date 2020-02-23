#include <iostream>
using namespace std;

void print_func(string str, int a, int b) {
    for(int i=a; i<=b; ++i) {
        cout << str[i];
    }
    cout << endl;
}

string reverse_func(string str, int a, int b) {
    string result = "";
    string str_before_a = str.substr(0, a);
    string str_after_b = str.substr(b+1, str.size()-b);
    string str_middle = str.substr(a, b-a+1);

    result += str_before_a;
    for(int i=str_middle.size()-1; i>=0; --i) {
        char c = str_middle[i];
        string c_str = {c};
        result += c_str;
    }
    result += str_after_b;

    return result;
}

string replace_func(string str, int a, int b, string p) {
    string result = "";
    string str_before_a = str.substr(0, a);
    string str_after_b = str.substr(b+1, str.size()-b);

    result += str_before_a;
    result += p;
    result += str_after_b;

    return result;
}

int main() {
    string str;
    cin >> str;

    int q;
    cin >> q;

    string op;
    for(int i=0; i<q; ++i) {
        cin >> op;

        if(op == "print") {
            int a, b;
            cin >> a >> b;
            print_func(str, a, b);
        } else if (op == "reverse") {
            int a, b;
            cin >> a >> b;
            str = reverse_func(str, a, b);
        } else if (op == "replace") {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str = replace_func(str, a, b, p);
        }
    }

    return 0;
}