#include <iostream>
using namespace std;

long long d(long long y){
    long long sum=0;
    while(y>0){
        int n = y % 10;
        sum += n;
        y /= 10;
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    while(n--){
        int x;
        cin>>x;
        cout<<d(x)<<endl;

    }

    return 0;
}