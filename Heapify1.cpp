#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin() + 1, b.end());

        vector<bool> used(n + 1, false);
        bool ok = true;

        for (int i = 1; i <= n && ok; i++) {
            if (used[i]) continue;

            vector<int> curA, curB;
            int x = i;
            while (x <= n) {
                used[x] = true;
                curA.push_back(a[x]);
                curB.push_back(b[x]);
                x *= 2;
            }

            sort(curA.begin(), curA.end());
            sort(curB.begin(), curB.end());

            if (curA != curB) {
                ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
