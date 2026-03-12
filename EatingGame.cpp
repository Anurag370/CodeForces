#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    set<int> winners;

    for (int start = 0; start < n; start++) {

        vector<long long> b = a;
        long long remaining = total;
        int current = start;
        int last_eater = -1;

        while (remaining > 0) {
            if (b[current] > 0) {
                b[current]--;
                remaining--;
                last_eater = current;
            }
            current = (current + 1) % n;
        }

        winners.insert(last_eater);
    }

    cout << winners.size() << endl;
  }
    return 0;
}
