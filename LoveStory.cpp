#include <iostream>
using namespace std;

int main(){

  int t;
  cin>>t;
  string cf = "codeforces";
  
  while(t--){
    string s;
    int c=0;
    cin>>s;
    for(int i = 0; i<s.size();i++){
      if(s[i] != cf[i]){
        c++;
      }
    }
    cout<<c<<endl;
  }
}
