#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int d = x % 10;
        int k = 0;
        int temp = x;

        while (temp > 0) {
            k++;
            temp /= 10;
        }

        int result = (d - 1) * 10 + (k * (k + 1)) / 2;

        cout << result << endl;
    }

    return 0;
}
