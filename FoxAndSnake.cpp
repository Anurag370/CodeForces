#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int toggle = 0;

    for(int i = 0; i < n; i++){

        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                cout << '#';
            }
        }
        else{
            if(toggle == 0){
                for(int j = 0; j < m; j++){
                    if(j == m - 1)
                        cout << '#';
                    else
                        cout << '.';
                }
                toggle = 1;   // change AFTER row finishes
            }
            else{
                for(int j = 0; j < m; j++){
                    if(j == 0)
                        cout << '#';
                    else
                        cout << '.';
                }
                toggle = 0;   // change AFTER row finishes
            }
        }

        cout << endl;
    }

    return 0;
}
