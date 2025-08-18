#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bool lampu[101];

    // Pada mulanya,lampu mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1; p <= 10; p++) {
        // untuk setiap lampu nomor i,
        for (int i = 1; i <= 100; i++) {
            // jika i merupakan kelipatan p,
            if (i % p == 0) {
                //tekan saklar
                lampu[i] = !lampu[i];
            }
        }
    }

    // Hitung banyak lampu nyala,
    int jumlah_menyala = 0;
    for (int i = 1; i <= 100; i++) {
        if (lampu[i]) jumlah_menyala++;
    }

    cout << jumlah_menyala << endl;
}
