#include <bits/stdc++.h>
using namespace std;

// ボタン2だけが光っているかどうか
bool is_only_button2(vector<bool> &light) {
    bool result = true;

    for(int i=1; i<light.size(); i++) {
        if (i == 2) {
            continue;
        } else {
            if (light[i] == true) {
                result = false;
                break;
            }
        }
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    // ボタン1のライトだけ光っているとき light[1] = true
    vector<bool> light((N+1), false);

    // ボタン1を押せば３が光るとき button[1] = 3
    vector<int> button((N+1), 0);

    // そのボタンをすでに押したかどうか
    // すでに押されたのに、また呼ばれればループしていると気づくことができる
    // 例. ボタン1がすでに押されている -> push_checklist = true
    vector<bool> push_checklist((N+1), false);

    int light_number;
    for(int i=1; i<=N; i++) {
        cin >> light_number;
        button[i] = light_number;
    }

    int count = 0;
    int push_button_numner = 1;

    while(count != -1) {

        // すでに押されているボタンがまた呼ばれればループしている
        if (push_checklist[push_button_numner] == true) {
            count = -1;
        } else {
            light[button[push_button_numner]] = true;
            light[push_button_numner] = false;
            push_checklist[push_button_numner] = true;
            push_button_numner = button[push_button_numner];
            count++;
        }

        if (is_only_button2(light)) {
            break;
        }
    }

    cout << count << endl;
    return 0;
}