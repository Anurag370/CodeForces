#include <iostream>
#include <vector>
using namespace std;

int main(){

  int t; cin >> t;
  while(t--){

    int n,h,l;
    cin>>n>>h>>l;
    vector<vector<int>> grid(h, vector<int> (l, 0));
    for(int i = 0; i < h; i++){
      for(int j = 0; j< l; j++){
        cout<<grid[i][j];
      }
      cout<<endl;
    }
  }
  return 0;
}
