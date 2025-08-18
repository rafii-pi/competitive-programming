#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rafiey_cihuy ios_base::sync_with_stdio(false); cin.tie(NULL)

int32_t main(){
    rafiey_cihuy;

    int angka, ans1, ans2;
    cin >> angka;

    for (int i = 1; i < (angka+1)/2; i++){
        for (int j = (angka+1)/2; j > 0; j--){
            if (angka == 0){
                ans1 = 0; ans2 = 0;
                break;
            }
            else if (angka == 1){
                ans1 = 1; ans2 = 1;
                break;
            }
            else{
                int temp = i * j;
                if(temp == angka){
                    if (i > j){
                        break;
                    }
                    else{
                        ans1 = i;
                        ans2 = j;
                    }
                }
            }
            
        }
    }
    cout << ans1 << " " << ans2;
}