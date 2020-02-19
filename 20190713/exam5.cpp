#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    int result = 0;
    cin >> N >> A >> B;

    int number = 0;
    int sum = 0;
    for(int i=0; i<=N; i++) {
        sum = 0;
        number = i;

        while(number > 0) {
            sum += number % 10;
            number /= 10;
        }
        
        if(sum >= A && sum <= B) {
            result += i;
        }
    }

    cout << result << endl;
}