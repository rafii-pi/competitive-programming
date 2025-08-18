#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int data[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    //vertical
    cout << "vertical\n";
    for (int i = 2; i >= 0; i--){
        for (int j = 0; j < 3; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "horizontal\n";
    //horizontal
    for (int i = 0; i < 3; i++){
        for (int j = 2; j >= 0; j--){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
