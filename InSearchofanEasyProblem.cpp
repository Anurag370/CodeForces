#include <iostream>
using namespace std;
int main(){

    int n,s=0;
    cin>>n;
    for(int i =0;i<n;i++){
        int o;
        cin>>o;
        s+=o;
    }
    if(s==0){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    return 0;
}
