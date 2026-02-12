#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,c=0;
    cin>>n;

    vector<int> h(n), a(n);
    for(int i = 0; i<n; i++){
        cin>>h[i]>>a[i];
    }

    for(int i: h){
        for(int j:a){
            if(i == j){
                c++;
            }
        }
    }

    cout<<c;
    return 0;
}