#include <bits/stdc++.h>
#define int long long
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int32_t main(){
    rafiieeyy
    int n, a, b, i, total = 0;
    cin >> n >> a >> b;

    if (a <= b) {
        i = a;
    } else {
        i = b;
    }

    for (i; i <= n; i++) {
        if (i % a == 0 || i % b == 0){
            // cout << i << " ";
            total++;
        }
        
    }
    // cout << endl << total << " " << i << endl;
    cout << total;
}