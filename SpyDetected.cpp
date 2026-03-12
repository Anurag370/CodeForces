#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int t; cin>>t;

  while(t--){
    int n; cin>>n;
    vector<int> arr(n);
    int index = 0;
    for(int i=0; i<n; i++){

      cin>>arr[i];
    }
    for(int i=1;i<n;i++){
      if (arr[i-1] != arr[i]){
        index = i;
      }
    }
    cout<<index;
  }
  return 0;
}
