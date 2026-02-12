#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long x,y;
        cin>>x>>y;

        if(x >= y){
            cout<<"Alice\n";
            continue;
        }
        long long d = y - x;
        if(x >= 2*d && y >= 3*d){
            cout<<"Bob\n";
        }else{
            cout<<"Alice\n";
        }
    }
    return 0;}