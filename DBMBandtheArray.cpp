#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0, e;
        for (int i = 0; i < n; i++) {
            cin >> e;
            sum += e;
        }

        if (sum <= s && (s - sum) % x == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
