#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas bukan bilangan genap, lanjutkan ke iterasi berikutnya
        if (luas % 2 != 0) {
            continue;
        }

        // Cek apakah luas adalah bilangan kuadrat sempurna
        bool kuadrat_sempurna = false;

        for (int k = 1; k * k <= luas; k++) {
            if (k * k == luas) {
                kuadrat_sempurna = true;
                break;
            }
        }

        if (kuadrat_sempurna) {
            // Cetak luas yang ditemukan
            cout << luas << endl;
            break; // keluar dari loop karena kita hanya perlu yang terkecil
        }
    }
}
