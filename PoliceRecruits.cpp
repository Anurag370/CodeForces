#include <iostream>
using namespace std;

int main(){

    int n,r=0,c=0;
    cin>>n;

    while(n--){

        int x;
        cin>>x;
        r += x;
        if(r<0){
            r = 0;
            c += -(x);
        }
    }
    cout<<c;

    return 0;
}