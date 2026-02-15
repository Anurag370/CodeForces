#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    int best = p[0], worst = p[0],ans =0;
    for(int i : p){
        if(i>best){
            best = i;
            ans++;

        }else if(i<worst){
            worst = i;
            ans++;
        }
    }
    cout<<ans;
//     int x;
//     cin>>x;
//     int best = 0, worst = 0,ans=0;
//     n-=1;
//     while(n--){
//         cin>>x;
//         if(x>best){
//             best = x;
//             ans++;
//         }else if(x<worst){
//             worst = x;
//             ans++;
//         }
// }
//     cout<<ans;
    return 0;
}