#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int totalScore = 0;
        vector<string> grid(10);

        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int dist = min({i, j, 9 - i, 9 - j});
                    totalScore += dist + 1;
                }
            }
        }

        cout << totalScore << "\n";
    }

    return 0;
}
