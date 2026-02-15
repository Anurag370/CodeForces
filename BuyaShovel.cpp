#include <iostream>
using namespace std;

int main(){

    int k,r,ans;
    cin>>k>>r;

    for(int i=1; i<=9; i++){
        if(k*i % 10 == 0 || ((k*i)-r)%10 == 0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}