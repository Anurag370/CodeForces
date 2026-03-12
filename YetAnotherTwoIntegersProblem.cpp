#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int difference = abs(a - b);
        int moves = (difference + 9) / 10;

        cout << moves << endl;
    }

    return 0;
}
