#include <iostream>
using namespace std;
int main(){
    int n,x,y,dx,dy,d=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>n;
            if(n==1){
                x=i;y=j;
            }
        }
    }
    dx = 2-x;
    dy = 2-y;
    if(dx<0){
        dx*=(-1);
    }
    if(dy<0){
        dy*=(-1);
    }
    d=dx+dy;
    cout<<d;

    return 0;
}
