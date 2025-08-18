#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    if (n == 0) return;    // <<< Kasus dasar: berhenti kalau n sudah 0
    cout << n << endl;     // Cetak n
    cetak_menurun(n - 1);  // Rekursi ke n - 1
}

int main() {
    cetak_menurun(10);     // Mulai dari 10 sampai 1
    return 0;
}
