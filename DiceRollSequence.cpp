#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c = 0;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        for (int i = 1; i < n; i++) {
            if (vec[i] == vec[i - 1] || vec[i] + vec[i - 1] == 7) {
                c++;
            }
        }

        cout << c << '\n';
    }
    return 0;
}
