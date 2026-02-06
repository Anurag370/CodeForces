#include <iostream>
using namespace std;
int main(){

    int k, n, w,b=0,t=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        t += k*i;
    }
    if(n<t){
        b=t-n;
    }

    cout<<b;

    return 0;
}
