#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Membuat dan mengisi matriks
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    // 2. Mengecek apakah matriks kosong
    if (matrix.empty()) {
        cout << "Matriks kosong!\n";
        return 0;
    }

    // 3. Menghitung jumlah baris dan kolom
    int jumlahBaris = matrix.size();
    int jumlahKolomPertama = matrix[0].size();

    cout << "Jumlah baris: " << jumlahBaris << endl;
    cout << "Jumlah kolom pada baris pertama: " << jumlahKolomPertama << endl;

    // 4. Menampilkan jumlah kolom di setiap baris
    for (int i = 0; i < jumlahBaris; i++) {
        cout << "Baris ke-" << i << " memiliki " << matrix[i].size() << " kolom\n";
    }

    // 5. Menampilkan seluruh isi matriks
    cout << "\nIsi Matriks:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl << endl;

    

    return 0;
}
