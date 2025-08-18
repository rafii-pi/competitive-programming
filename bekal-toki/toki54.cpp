#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x);
#define fi first
#define se second
#define int long long

using namespace std;

void opHitung(vector<vector<int>> mt1, vector<vector<int>> mt2, vector<vector<int>>& mthasil, int a, int b, int c){
    for (int i = 0; i < a; i++){ //baris matriks a
        for (int j = 0; j < c; j++){ //kolom matriks b
            for (int k = 0; k < b; k++){ //keliling matrix (tengah diantara baris a dan kolom b)
                mthasil[i][j] = mthasil[i][j] + mt1[i][k] * mt2[k][j];
            }
        }
    }
}

void displayData(int a, int b, vector<vector<int>> data){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

void insertData(int a, int b, vector<vector<int>>& data){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin >> data[i][j];
        }
    }
}

int32_t main(){
    rafiieeyy

    int N, M, P;
    cin >> N >> M >> P;

    //matriks baris kolom vector nya double
    //N, vector<int>(M) artinya memeberi baris dan kkolom, jumlh baris N dan diisi oleh value vector sejumlah M dari masing kolom
    vector<vector<int>> matriks_nm(N, vector<int>(M));
    vector<vector<int>> matriks_mp(M, vector<int>(P));
    vector<vector<int>> matriks_hasil(N, vector<int>(P));

    insertData(N, M, matriks_nm);
    insertData(M, P, matriks_mp);
    //operasi hitung
    opHitung(matriks_nm, matriks_mp, matriks_hasil, N, M, P);
    displayData(N, P, matriks_hasil);
}