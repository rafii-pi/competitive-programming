#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t biaya(int betina, int jantan, ll total){
    ll harian_jantan = 0, harian_betina = 0;
    // Harga bebek jantan
    if (jantan < 10) {
        harian_jantan = jantan * 100000;
    } else if (jantan <= 50) {
        harian_jantan = jantan * 75000;
    } else {
        harian_jantan = jantan * 50000;
    }

    // Harga bebek betina
    if (betina < 10) {
        harian_betina = betina * 100000;
    } else if (betina <= 50) {
        harian_betina = betina * 75000;
    } else {
        harian_betina = betina * 50000;
    }
    total = harian_betina + harian_jantan;
    return total;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    ll hasil = 0;

    for (int i = 0; i < 4; i++){
        cout << biaya(betina[i], jantan[i], hasil) << endl;
    }
}
//supaya hasil return nya muncul, gunakan cout pada main, jangan hanya menuliskan fungsinya saja
//ex : cout << biaya(betina[i], jantan[i], hasil) << endl;
//bukan seperti ini biaya(betina[i], jantan[i], hasil);