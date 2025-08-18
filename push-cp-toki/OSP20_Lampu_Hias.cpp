//KSN-P Informatika 2020 - Bagian B  B2
//Lampu Hias Warna-Warni

#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second

using namespace std;

//Cek jika hanya ada 2 jenis huruf yang berbeda output -1
void cek(char data[], int iterasi, int& jumlah){
    vector<char> temp;
    for (int i = 0; i < iterasi; i++){
        if(find(temp.begin(), temp.end(), data[i]) == temp.end()){
            temp.pb(data[i]);
            jumlah++;
        }
    }
    cout << "jenis huruf : " << jumlah << endl;
}

int main(){
    rafiieeyy

    int n, jawaban = 0, jumlah = 0;
    vector<int> ans;
    cin >> n;
    char lampu[n];
    cin >> lampu;

    for (auto x: lampu) cout << x;
    cout << endl;

    cek(lampu, n, jumlah);

    if (jumlah > 2){
        for (int i = 0; i < n; i++){
            if (lampu[i] == lampu[0] || lampu[i] != lampu[i]-1 && find(ans.begin(), ans.end(), lampu[i]) == ans.end() && jumlah < 4){
                ans.pb(lampu[i]);
                cout<<"\nyang masuk if: "<<lampu[i];
                cout<<"\njumlah if: "<<jawaban;
                jawaban+=1;
            }
            else if(find(ans.begin(), ans.end(), lampu[i]) == ans.end() || lampu[i] == lampu[i-3]){
                ans.pb(lampu[i]);
                cout<<"\nyang masuk esleif: "<<lampu[i];
                cout<<"\njumlah esleif: "<<jawaban;
                jawaban+=1;
            }
        }        
        cout << "\n\njumlah aselole : ";
        cout << jawaban << endl;
    }
    else {
        cout << -1;
    }

}
