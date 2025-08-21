#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int32_t main(){
    rafiieeyy;
    double average = 0;
    for (int i = 0; i < 6; i++) {
        int sample; cin >> sample;
        average += sample;
    }
    double result = average / 6.0;
    // fixed → memastikan yang dihitung setprecision(9) adalah jumlah angka di belakang koma.
    // setprecision(9) → tampilkan 9 angka di belakang koma.
    cout << fixed << setprecision(9) << result;

    // 50 70 55 63 84 100 (sample)
    
}