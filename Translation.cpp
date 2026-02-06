#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    string t,s;
    cin>>t;
    cin>>s;

    reverse(s.begin(), s.end());

    if(t==s){
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }

    return 0;
}
