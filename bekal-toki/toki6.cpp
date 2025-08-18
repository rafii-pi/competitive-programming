#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second

using namespace std;

const int INFF = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, p;
    cin >> c >> p;

    vector<pair<int, int>> v(c);
    for (int i = 0; i < c; i++) cin >> v[i].fi >> v[i].se;
    sort(v.begin(), v.end());

    vector<pair<int, int>> g(p);
    for (int i = 0; i < p; i++) cin >> g[i].fi >> g[i].se;
    sort(g.begin(), g.end());

    int ptr = 0, mx = -INFF, ans = 0;
    for (int i = 0; i < p; i++) {
        while (ptr < c && v[ptr].fi <= g[i].fi) {
            mx = max(mx, v[ptr].se);
            ptr += 1;
        }
        ans += max(0LL, mx - g[i].se);
    }
    cout << ans << '\n';

    return 0;
}