#include <iostream>
using namespace std;

int main(){
    int baris, kolom;
    cin >> baris >> kolom;
    //index array pakai variabel harus diisi dulu nilainya
    int matrix[baris][kolom];
    int transpose[kolom][baris];


    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cin >> matrix[i][j];
        }
    }
    
    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    
    for(int i = 0; i < kolom ; i++){
        for (int j = baris-1; j >= 0; j--){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}