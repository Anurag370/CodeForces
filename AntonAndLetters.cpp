#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // safer than cin >> s for this problem

    set<char> c;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            c.insert(s[i]);
        }
    }

    cout << c.size() << endl;

    return 0;
}
