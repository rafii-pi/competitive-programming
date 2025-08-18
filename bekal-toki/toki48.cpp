#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rafiiyy_cihuy ios_base::sync_with_stdio(false); cin.tie(NULL)

int32_t main(){
    rafiiyy_cihuy;

    int angka; cin >> angka;

    int ans1 = 1, ans2 = angka;
    if (angka == 0 || angka == 1){
        ans1 = angka; ans2 = angka;
        cout << ans1 << " " << ans2;
        return 0;
    }

    for (int i = ans1; i*i <= angka; i++){
        if (angka % i == 0){
            int lawan_i = angka / i;
            if (i <= lawan_i && (lawan_i - i) < (ans2 - ans1)){
                ans1 = i;
                ans2 = lawan_i;
            }
        }
    }
    cout << ans1 << " " << ans2;
}