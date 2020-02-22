#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    while(!(n == 0 && x == 0)) {
        vector<vector<vector<int>>> vec(n+1, vector<vector<int>>(n+1, vector<int>(n+1, 0)));
        vector<int> nums(3, 0);

        int count = 0;
        int n_sum;
        for(int i=1; i<=n; ++i) {
            for(int j=1; j<=n; ++j) {
                if (i == j) continue;
                for(int k=1; k<=n; ++k) {
                    if (i == k || j == k) continue;
                    n_sum = i + j + k;
                    if (n_sum == x) {
                        nums[0] = i;
                        nums[1] = j;
                        nums[2] = k;
                        sort(nums.begin(), nums.end());
                        if (vec[nums[0]][nums[1]][nums[2]] == 0) {
                            count++;
                            vec[nums[0]][nums[1]][nums[2]] = 1;
                        }
                    }
                }
            }
        }

        cout << count << endl;
        cin >> n >> x;
    }

    return 0;
}