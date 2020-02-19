#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;

    string s;
    for(int i=0; i<n; i++) {
        cin >> s;
        if (mp.count(s) == 0) mp[s] = 1;
        else mp[s]++;
    }

    int max_count = -1;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        int count = itr->second;
        if (count > max_count) max_count = count;
    }

    vector<string> vec;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->second != max_count) continue;
        else {
            vec.push_back(itr->first);
        }
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << endl;
    }

    return 0;
}