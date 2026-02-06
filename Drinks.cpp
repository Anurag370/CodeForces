#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float t = 0;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        t += v;
    }

    float p = t / n;
    cout << p;

    return 0;
}
