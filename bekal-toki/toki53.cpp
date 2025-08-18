#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second

using namespace std;

void outputans(vector<int> hasil) {
    sort(hasil.begin(), hasil.end());
    int ukuran = hasil.size();
    cout << hasil[0] << " " << hasil[ukuran - 1] << endl;
    //for (int g: hasil) cout << g << " "; //buat cek hasil aja.
}

vector<int> rumus(vector<pair<int, int>> data, int n, int d) {
    vector<int> result;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // hanya sekali untuk (i,j)
            int x = int(pow(abs(data[j].fi - data[i].fi), d));
            int y = int(pow(abs(data[j].se - data[i].se), d));
            int xy = x + y;

            result.pb(xy); // pasti bukan 0, karena i != j
        }
    }
    return result;
}

int main() {
    rafiieeyy
    int N, D;
    cin >> N >> D;

    vector<pair<int, int>> murid;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        murid.pb({x, y});
    }

    vector<int> result = rumus(murid, N, D);
    outputans(result);
}
