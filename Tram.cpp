#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,board,unboard,total=0,maxP=0;
    cin>>n;

    while(n--){
        cin>>unboard>>board;
        total = (total - unboard) + board;
        maxP = max(maxP,total); 
    }

    cout<<maxP;
    return 0;
}