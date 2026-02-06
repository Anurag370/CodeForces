#include <iostream>
using namespace std;
int main(){

    int n,max_capacity=0,t=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int ex,en;
        cin>>ex>>en;
        t=(t-ex)+en;
        max_capacity  =max(max_capacity,t);
    }
    cout<<max_capacity;

    return 0;
}
