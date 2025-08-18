#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second
#define int long long

using namespace std;

void inputPrima(int jumlah, vector<int>& dataPrima){
    for (int i = 0; i < jumlah; i++){
        cin >> dataPrima[i];
    }
}

void printData(int jumlah, vector<bool> hasil){
    for (int i = 0; i < jumlah; i++){
        if (hasil[i]){
            cout << "YA" << endl;
        }
        else {
            cout << "BUKAN" << endl;
        }
    }
}

void cekPrima(int jumlah, vector<int> dataCek, vector<bool>& hasil){
    for (int i = 0; i < jumlah; i++){
        int n = dataCek[i];
        if (n < 2){
            hasil[i] = false;
            continue;
        }

        bool isPrima = true;
        for (int d = 2; d * d <= n; d++){
            if (n % d == 0){
                isPrima = false;
                break;
            }
        }
        hasil[i] = isPrima;
    }
}

int32_t main(){
    rafiieeyy

    int jml;
    cin >> jml;
    vector<int> prima(jml);
    vector<bool> hasilPrim(jml);

    //input data
    inputPrima(jml, prima);
    cekPrima(jml, prima, hasilPrim);
    printData(jml, hasilPrim);
    
}