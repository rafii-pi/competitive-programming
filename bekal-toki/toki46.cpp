#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rafiey_cihuy ios_base::sync_with_stdio(false); cin.tie(NULL)

int32_t main(){
    rafiey_cihuy;

    int angka;
    cin >> angka;

    if (angka == 0) {
        cout << "0 0\n";
        return 0;
    }

    int r_terbaik = 1, c_terbaik = angka;

    for (int r = 1; r * r <= angka; r++) {
        if (angka % r == 0) {
            int c = angka / r;
            if ((c - r) < (c_terbaik - r_terbaik)) {
                r_terbaik = r;
                c_terbaik = c;
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << '\n';
}
