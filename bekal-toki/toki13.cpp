#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); // mempercepat cin/cout
    cin.tie(0); // memutus hubungan antara cin dan coutios_base::sync_with_stdio(false); // mempercepat cin/cout // memutus hubungan antara cin dan cout
    
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    int penjualan = 0, pembelian = 0;
    for(int i = 0; i < 10; i++){
        penjualan += jual[i];
        pembelian += beli[i];
        cout << pembelian - penjualan << endl;
    }
}


