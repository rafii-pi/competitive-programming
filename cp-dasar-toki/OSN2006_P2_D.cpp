#include <bits/stdc++.h>
using namespace std;


void display(vector<vector<bool>>& zz){
    int baris = zz.size();
    int kolom = zz[0].size();
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << zz[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    vector<vector<bool>> runtuh(3, vector<bool>(3));
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> runtuh[i][j];
        }
    }

}