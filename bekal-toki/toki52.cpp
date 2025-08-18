#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second

using namespace std;

void display(vector<pair<int, int>> data, int n){
    for (int i = 0; i < n; i++){
        cout << "\nMurid Ke-" << i+1 << " : faktor x : " << data[i].fi << " faktor y : " << data[i].se;
    }
}


void outputans(vector<int> hasil){
    int l, r, ukuran;
    sort(hasil.begin(), hasil.end());
    ukuran = hasil.size();
    cout << hasil[0] << " " << hasil[ukuran-1];
    
}

vector<int> rumus(vector<pair<int, int>> data, int n, int d){
    vector<int> result;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int x = int(pow(abs(data[j].fi - data[i].fi), d));
            int y = int(pow(abs(data[j].se - data[i].se), d));
            int xy = x + y;

            if (xy != 0){
                result.pb(xy);
            }
        }
    }
    outputans(result);
}

int main(){
    rafiieeyy
    int N, D;
    cin >> N >> D;

    vector<pair<int, int>> murid;
    
    for (int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        murid.pb({x, y});
    }
    
    vector<int> result = rumus(murid, N, D);
    cout << endl;
    /*
    for (int z: result) cout << z << " ";

    sort(result.begin(), result.end());
    cout << endl;
    for (int z: result) cout << z << " ";
    cout << endl;
    */

}