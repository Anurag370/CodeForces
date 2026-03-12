#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  int n; cin>>n;
  vector<int> p,m,s;
  
  for(int i=1;i<=n;i++){
    int x; cin>>x;
    if(x == 1){
      p.push_back(i);
    }else if(x == 2){
      m.push_back(i);
    }else if(x == 3){
      s.push_back(i);
    }

  }
  int teams = min(p.size(),min(m.size(),s.size()));
  cout << teams<<endl;

  for(int i=0; i<teams; i++){
    cout<<p[i]<<" "<<m[i]<<" "<<s[i]<<endl;
  }
  return 0;
}
