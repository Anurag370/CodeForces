#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int max = INT_MIN, min=INT_MAX,min_index=0,max_index=0,c=0 ;
    
    for(int i = 0;i < n; i++){
        if(a[i]>=max){
            max = a[i];
            max_index = i;
        }
        if(a[i]<=min){
            min = a[i];
            min_index = i;
        }
    }
    
    c += max_index + (n-1) - min_index;

    if(max_index>min_index){
        c--;
    }

    cout<<c;
    return 0;
}