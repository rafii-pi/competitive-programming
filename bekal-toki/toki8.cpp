#include <bits/stdc++.h>
using namespace std;

int main(){
    const int jumlah = 10;
    for (int i = 1; i <= jumlah; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        for (int j = jumlah; j > i; j--){
            cout << ".";
        }
        cout << endl;
    }
}