#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second
#define int long long

using namespace std;

//masukin data temp ke vector utama yang telah dimodifikasi
void tempOri(vector<vector<int>>& matrix, vector<vector<int>> temp){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            matrix[i][j] = temp[i][j];
        }
    }
}

void inputData(int baris, int kolom, vector<vector<int>>& matrix){
    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cin >> matrix[i][j];
        }
    }
}

//90 derajat searah jarum jam
void putar90d(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(baris, vector<int>(kolom));

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            temp[(baris-1)-j][i] = matrix[i][j];
        }
    }
    tempOri(matrix, temp);
}

//ngubah ke vertical, artinya dari kanan ke kiri, maksudnya vertical itu sebgai potongan tegak yang artinya dia pindah ke potongan sebrang
void vertiChange(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(baris, vector<int>(kolom));

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            temp[i][j] = matrix[(baris-1)-i][j];
        }
    }
    tempOri(matrix, temp);
}

//horizontal dari bawah ke atas soalnya matriks nya dipotong melingtang mereka harus nyebrang potongan
void horiChange(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(baris, vector<int>(kolom));

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            temp[i][j] = matrix[i][(kolom-1)-j];
        }
    }
    tempOri(matrix, temp);
}

void tampilData(vector<vector<int>> matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    rafiieeyy

    int N, M, j;
    cin >> N >> M >> j;
    //N baris , M Kolom , j jumlah operasi
    vector<vector<int>> matrix(N, vector<int>(M));
    vector<vector<int>> ans(N, vector<int>(M));
    
    inputData(N, M, matrix);
    
    vector<string> operasi;
    //input operasi
    for (int i = 0; i < j; i++){
        string tempp;
        cin >> tempp;
        operasi.pb(tempp);
    }
    
    for (int i = 0; i < j; i++){
        if (operasi[i] == "|"){
            vertiChange(matrix);
        }
        else if (operasi[i] == "_"){
            horiChange(matrix);
        }
        else if (operasi[i] == "90"){
            putar90d(matrix);
        }
        else if (operasi[i] == "180"){
            putar90d(matrix);
            putar90d(matrix);
        }
        else if (operasi[i] == "270"){
            putar90d(matrix);
            putar90d(matrix);
            putar90d(matrix);
        }
        
    }
    tampilData(matrix);

}