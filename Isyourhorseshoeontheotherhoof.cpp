#include <iostream>
#include <set>
using namespace std;
int main(){

    int s,n;
    set<int> a;
    for(int i=0;i<4;i++){
        cin>>s;
        a.insert(s);
    }
    n= 4 - a.size();
    cout<<n;

    return 0;
}
