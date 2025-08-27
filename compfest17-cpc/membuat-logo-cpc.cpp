#include <bits/stdc++.h>
#define int long long
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int32_t main() {
    rafiieeyy

    int n, m, l;
    cin >> n >> m >> l;

    //ketebalan atas
    for (int i = 0; i < l; i++){
        for (int j = 0; j < m; j++){
            cout << "*";
        }
        cout << endl;
    }

    //pola pusat
    for (int i = 0; i < n - (l*2); i++){
        for (int j = 0; j < m; j++){
            if (j < l) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    
    //ketebalan bawah
    for (int i = 0; i < l; i++){
        for (int j = 0; j < m; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}

