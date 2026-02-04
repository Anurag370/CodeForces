#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> l(s.begin(),s.end());
    int n = l.size();
    if(n%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
