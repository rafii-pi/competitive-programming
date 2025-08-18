#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define int long long

using namespace std;

void inputData(int baris, int kolom, vector<vector<int>>& matrix) {
    for(int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matrix[i][j];
        }
    }
}

void tempOri(vector<vector<int>>& matrix, vector<vector<int>> temp) {
    matrix = temp; // langsung assign
}

// Rotasi 90 derajat searah jarum jam
void putar90d(vector<vector<int>>& matrix) {
    int baris = matrix.size();
    int kolom = matrix[0].size();
    vector<vector<int>> temp(kolom, vector<int>(baris));

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            temp[j][baris - 1 - i] = matrix[i][j];
        }
    }
    matrix = temp; // langsung replace matrix
}

// Refleksi atas-bawah (vertikal)
void vertiChange(vector<vector<int>>& matrix) {
    reverse(matrix.begin(), matrix.end());
}

// Refleksi kiri-kanan (horizontal)
void horiChange(vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        reverse(row.begin(), row.end());
    }
}

void tampilData(const vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        for (auto& val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int32_t main() {
    rafiieeyy

    int N, M, j;
    cin >> N >> M >> j;
    vector<vector<int>> matrix(N, vector<int>(M));

    inputData(N, M, matrix);

    vector<string> operasi(j);
    for (int i = 0; i < j; i++) {
        cin >> operasi[i];
    }

    for (int i = 0; i < j; i++) {
        if (operasi[i] == "|") {
            vertiChange(matrix);
        }
        else if (operasi[i] == "_") {
            horiChange(matrix);
        }
        else if (operasi[i] == "90") {
            putar90d(matrix);
        }
        else if (operasi[i] == "180") {
            putar90d(matrix);
            putar90d(matrix);
        }
        else if (operasi[i] == "270") {
            putar90d(matrix);
            putar90d(matrix);
            putar90d(matrix);
        }
    }

    tampilData(matrix);
}
