#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maximum = INT_MIN, minimum = INT_MAX;
    int min_index = 0, max_index = 0;
    
    for(int i = 0; i < n; i++){
        if(a[i] > maximum){
            maximum = a[i];
            max_index = i;
        }
        if(a[i] <= minimum){
            minimum = a[i];
            min_index = i;
        }
    }
    
    int c = max_index + (n - 1 - min_index);

    if(max_index > min_index){
        c--;
    }

    cout << c;
    return 0;
}
