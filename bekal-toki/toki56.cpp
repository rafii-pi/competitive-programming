//cek bilangan prima
#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define int long long
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)
#define fi first
#define se second

using namespace std;

void cekPrim(int angka){
    cout << endl;
    
    if (angka < 2){
        cout << angka << " adalah Bukan Prima";
        return;
    }

    for (int i = 2; i * i <= angka; i++){
        if (angka % i == 0){
            cout << angka << " adalah Bukan Prima";
            return;
        }
    }
    cout << angka << " adalah Prima";
}


int32_t main(){
    int prim;
    char lanjut;
    
    while(true){
        system("cls");
        cout << "Bilangan Prima\n\nCek Bilangan : " << flush;
        cin >> prim;

        cekPrim(prim);

        char choice; cout << "\n\nlanjut?(y/t) : "; cin >> choice;
        if (choice == 't' || choice == 'T'){
            cout << "\n\nTerimakasih\n\n";
            break;
        }


    }
    
    
}