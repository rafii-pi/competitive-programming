#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second
#define int long long

using namespace std;

//ternyata bisa copy matriks hanya dengan ori = temp; wtfff
void inputData(int baris, int kolom, vector<vector<int>>& matrix){
    for(int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cin >> matrix[i][j];
        }
    }
}

// Rotasi 90 derajat searah jarum jam
void putar90d(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(kolom, vector<int>(baris));

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            temp[j][baris - 1 - i] = matrix[i][j];
        }
    }
    matrix = temp;
}

// Refleksi vertikal (atas-bawah)
void vertiChange(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(baris, vector<int>(kolom));

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            temp[i][j] = matrix[baris - 1 - i][j];
        }
    }
    matrix = temp;
}

// Refleksi horizontal (kiri-kanan)
void horiChange(vector<vector<int>>& matrix){
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(baris, vector<int>(kolom));

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            temp[i][j] = matrix[i][kolom - 1 - j];
        }
    }
    matrix = temp;
}

void tampilData(const vector<vector<int>>& matrix){
    for (auto& row : matrix){
        for (auto& val : row){
            cout << val << " ";
        }
        cout << '\n';
    }
}

int32_t main(){
    rafiieeyy

    int N, M, j;
    cin >> N >> M >> j;
    // N baris, M kolom, j jumlah operasi
    vector<vector<int>> matrix(N, vector<int>(M));

    inputData(N, M, matrix);

    vector<string> operasi(j);
    for (int i = 0; i < j; i++){
        cin >> operasi[i];
    }

    for (const string& op : operasi){
        if (op == "|") vertiChange(matrix);
        else if (op == "_") horiChange(matrix);
        else if (op == "90") putar90d(matrix);
        else if (op == "180") { putar90d(matrix); putar90d(matrix); }
        else if (op == "270") { putar90d(matrix); putar90d(matrix); putar90d(matrix); }
    }

    tampilData(matrix);
}
