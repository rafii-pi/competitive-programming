#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
using namespace std;

int32_t main(){
    int a, b, c;
    cin >> a >> b >> c;

    bool hasil = (a + b) > c && (a + c) > b && (b + c) > a;

    if (hasil){
        cout << "segitiga";
    } else {
        cout << "bukan segitiga";
    }
    
}