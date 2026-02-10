#include <iostream>
#include <set>
using namespace std;

int main(){

    int n;
    cin>>n;
    set<int> a;
    int p;
    cin>>p;

    while(p--){
        int x;
        cin>>x;
        a.insert(x);
    }
    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;
        a.insert(x);
    }

    if(a.size() == n ){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}