#include <iostream>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        int temp = year;
        set<int> digits;

        while (temp > 0) {
            digits.insert(temp % 10);
            temp /= 10;
        }

        if (digits.size() == 4) {
            cout << year;
            break;
        }
    }

    return 0;
}
