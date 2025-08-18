#include <bits/stdc++.h>
using namespace std;

#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second
#define ll long long

int main() {
    rafiieeyy
    int N;
    cin >> N;  // Jumlah koordinat yang ingin dimasukkan

    //pair<T1, T2>	Struktur untuk menyimpan 2 nilai
    vector<pair<int, int>> koordinat;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        koordinat.pb({x, y});  // Masukkan sebagai pair
    }

    // Menampilkan isi
    for (int i = 0; i < N; i++) {
        cout << "Koordinat ke-" << i << ": ";
        cout << koordinat[i].fi << " " << koordinat[i].se << endl;
    }

    return 0;
}
