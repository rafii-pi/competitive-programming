#include <bits/stdc++.h>
#define int long long
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void inputHarga(vector<int>& price, int p) {
    for (int i = 0; i < p; i++) {
        cin >> price[i];
    }
}

int32_t main(){
    int jml_brg, a, b;
    cin >> jml_brg >> a >> b;
    //list haarga
    vector<int> harga_barang(jml_brg);

    inputHarga(harga_barang, jml_brg);

    cout << endl << endl;

    for (auto x: harga_barang) cout << x << " ";
}