#include <bits/stdc++.h>
using namespace std;

void gambarPegunungan(int n) {
    if (n == 1) {
        cout << "*\n";
        return;
    }
    
    // bagian atas: pegunungan level n-1
    gambarPegunungan(n - 1);
    
    // bagian tengah: baris dengan n buah '*'
    for (int i = 0; i < n; i++) cout << "*";
    cout << "\n";
    
    // bagian bawah: pegunungan level n-1 lagi
    gambarPegunungan(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    gambarPegunungan(N);

    return 0;
}
