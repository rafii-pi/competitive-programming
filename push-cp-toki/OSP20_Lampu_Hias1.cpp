//KSN-P Informatika 2020 - Bagian B  B2
//Lampu Hias Warna-Warni FIX

#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second

using namespace std;

//Cek jika hanya ada 2 jenis huruf yang berbeda output -1
void cek(string data, int iterasi, int& jumlah){
    vector<char> temp;
    for (int i = 0; i < iterasi; i++){
        if(find(temp.begin(), temp.end(), data[i]) == temp.end()){
            temp.pb(data[i]);
            jumlah++;
        }
    }
}

int main(){
    rafiieeyy

    int n, jawaban = 0, jumlah = 0;
    vector<int> ans;
    cin >> n;
    string lampu;
    cin >> lampu;

    cek(lampu, n, jumlah);

    if (jumlah > 2){
        for (int i = 0; i < n; i++){
            if (lampu[i] == lampu[0] || lampu[i] != lampu[i-1] && find(ans.begin(), ans.end(), lampu[i]) == ans.end() && jumlah < 4){
                ans.pb(lampu[i]);
                jawaban+=1;
            }
            else if(find(ans.begin(), ans.end(), lampu[i]) == ans.end() || lampu[i] == lampu[i-3]){
                ans.pb(lampu[i]);
                jawaban+=1;
            }
        }
        cout << jawaban;
    }
    else {
        cout << -1;
    }

}
