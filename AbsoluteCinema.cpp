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
        vector<long long> f(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }

        // Compute first differences
        vector<long long> d(n+1, 0);
        for (int i = 1; i < n; i++) {
            d[i] = f[i+1] - f[i];
        }

        // Compute a using second differences
        vector<long long> a(n+1, 0);
        for (int i = 2; i < n; i++) {
            a[i] = (d[i] - d[i-1]) / 2;
        }

        // Now solve for endpoints a1 and an
        // We know f(1)= sum_{i=1..n} a_i*(i-1)
        long long sumKnown = 0;
        for (int i = 2; i <= n-1; i++) {
            sumKnown += a[i] * (i - 1);
        }
        // Use f(1) to get a1 + a_n*(n-1)
        long long val = f[1] - sumKnown;
        // Also use f(n)= sum a_i(n-i)
        long long sumKnown2 = 0;
        for (int i = 2; i <= n-1; i++) {
            sumKnown2 += a[i] * (n - i);
        }
        long long val2 = f[n] - sumKnown2;

        // Solve 2x2:
        // a1*(0) + an*(n-1) = val
        // a1*(n-1) + an*(0) = val2
        a[1] = val2 / (n - 1);
        a[n] = val / (n - 1);

        // Output answer
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
