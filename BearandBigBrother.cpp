
//Not submitted
#include <iostream>
using namespace std;
int main(){

    int a,b,i=0;
    cin>>a>>b;
    if(1<=a && a<=b && b<=10){
    while(1){
        a=a*3;
        b=b*2;
        i++;
        if(a>b){
            cout<<i;
            break;
        }
    }}
    return 0;
}
