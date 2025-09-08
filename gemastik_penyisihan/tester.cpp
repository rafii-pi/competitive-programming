#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int pangkat; cin >> pangkat;
    cout << pow(2, pangkat);
    cout << endl << endl;

    for (int i = 1; i < 21; i++){
        cout << 2 << " ^ " << i << " = " << pow(2, i) << endl;
    }
    

    int data[4] = {1, 5, 3, 7};
    sort(data[0], data[3]);
    for (auto x: data) cout << x << " ";
}