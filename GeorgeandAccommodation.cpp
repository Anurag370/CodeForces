#include <iostream>
using namespace std;
int main(){

    int n,r=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(p<q){
            r++;
        }
    }
    cout<<r;

    return 0;
}
