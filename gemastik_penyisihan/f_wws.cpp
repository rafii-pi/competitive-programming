#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> desa(n);

    for (int i = 0; i < n; i++){
        cin >> desa[i];
    }
    

    for(auto x: desa) cout << x << " "; 

}