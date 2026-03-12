#include<iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_i = 0;
        vector<int>p(n);
        for(int i=0;i<n;i++) {
            cin>>p[i];
            if (p[i] == n) {
            max_i = i;
        }
        }
        swap(p[0], p[max_i]);
      for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    }
}