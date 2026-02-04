#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    int uc = 0, lc = 0;
    cin >> s;

    int n = s.length();

    for(int i = 0; i < n; i++){
        if(isupper(s[i])) uc++;
        else if(islower(s[i])) lc++;
    }

    for(int i = 0; i < n; i++){
        if(lc >= uc){
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }

    cout << s;
    return 0;
}
