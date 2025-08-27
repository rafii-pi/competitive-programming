#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
using namespace std;

int32_t main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int langkah = 1, z = x;
    z = (a * z + b) % c;

    while (z != x) {
        z = (a * z + b) % c;
        langkah++;
    }
    cout << langkah;
}