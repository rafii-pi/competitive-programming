#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
using namespace std;

void entryData(vector<int>& c, vector<int>& g) {
    int ukuran = c.size();
    for (int i = 0; i < ukuran; i++){
        cin >> c[i];
    }
    for (int i = 0; i < ukuran; i++){
        cin >> g[i];
    }
}
void operasiData(vector<int> c, vector<int> g, int& ch, int& gn) {
    int ukuran = c.size();
    for (int i = 0; i < ukuran; i++){
        if (c[i] > g[i]) {
            ch += (c[i] - g[i]);
        }
        else if(g[i] > c[i]) {
            gn += (g[i] - c[i]);
        }
    }
}

int32_t main() {
    int kartu; cin >> kartu;
    vector<int> chanek(kartu);
    vector<int> ganesh(kartu);

    entryData(chanek, ganesh);

    int skor_chanek = 0, skor_ganesh = 0;

    operasiData(chanek, ganesh, skor_chanek, skor_ganesh);
    
    if (skor_chanek > skor_ganesh){
        cout << "Pak Chanek";
    }
    else if (skor_ganesh > skor_chanek){
        cout << "Pak Ganesh";
    }
    else{
        cout << "Mabar";
    }
    
}