#include <iostream>
#include <set>
using namespace std;
int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> alpha;
    for(int i=0;i<n;i++){
        alpha.insert(tolower(s[i]));
    }
    if(alpha.size() == 26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
