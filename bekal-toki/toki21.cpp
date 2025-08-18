#include <bits/stdc++.h>
using namespace std;

int total_kandang = 10;

// bebek[i] menyatakan banyaknya bebek pada kandang nomor i.
int bebek[11];

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0;
    }
}

// untuk menambahkan bebek ke dalam kandang dari nomor a sampai b
void isi_bebek_ke_dalam_kandang(int kandang_awal, int kandang_akhir, int jumlah_bebek) {
    for (int i = kandang_awal; i <= kandang_akhir; i++) {
        bebek[i] += jumlah_bebek;
    }
}

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1];
    for (int i = 2; i <= total_kandang; i++) {
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]);
    }
    return bebek_terbanyak;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    kosongkan_kandang();

    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 2);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;
}
