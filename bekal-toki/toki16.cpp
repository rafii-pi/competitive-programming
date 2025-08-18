#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };
    
    int harga_jual[3] = {100, 120, 150};

    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if(luas[i][j] == luas[i][0]){
                int temp = luas[i][j] * 100;
                ans1 += temp;
            }
            else if(luas[i][j] == luas[i][1]){
                int temp = luas[i][j] * 120;
                ans2 += temp;
            }
            else if(luas[i][j] == luas[i][2]){
                int temp = luas[i][j] * 150;
                ans3 += temp;
            }
        }
    }
    cout << ans1 << "\n" << ans2 << "\n" << ans3;
}