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

    int ans1 = 1, ans2 = angka;

    for (int i = 1; i * i <= angka; i++) {
        if (angka % i == 0) {
            int j = angka / i;
            if (i <= j && (j - i) < (ans2 - ans1)) {
                ans1 = i;
                ans2 = j;
            }
        }
    }

    cout << ans1 << " " << ans2 << '\n';
}
