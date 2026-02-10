#include <iostream>
using namespace std;

int main(){

    int n,c=0;
    cin>>n;

    int bills[] = {100,20,10,5,1};

    for(int b : bills){
        c +=n / b;
        n %= b;
    }
    cout<<c;
    return 0;
}