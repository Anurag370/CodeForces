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
        long long x;
        cin>>x;
        int c =0;

        for(long long y = x; y<=x +90; y++){
            if(y - d(y) == x){
                c++;
            }
        }
        cout<<c<<endl;
    }
   
    return 0;
}