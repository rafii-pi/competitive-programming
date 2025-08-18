#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second
#define int long long

using namespace std;

int32_t main(){
    rafiieeyy

    int n; cin >> n;
    if (n == 2){
        cout << "*\n**\n*";
        return 0;
    }
    
    // Bagian atas segitiga
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
        if (i > 0  && i < n){
            cout << "*";
            cout << endl;
        }
    }

    // Bagian bawah segitiga
    for(int i = 0; i < n; i++){
        for (int j = n-1; j > i; j--){
            cout << "* ";
        }
        if (i < n - 3){  // hanya cetak deym sampai sebelum 3 baris terbawah
            cout << endl;
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
