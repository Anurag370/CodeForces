#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> c(3);
    for(int i; i<3; i++){
        cin>>c[i];
    }

    sort(c.begin(),c.end());

    cout<<(c[2]-c[1])+(c[1]-c[0])<<endl;
    return 0;
}