//optimasi menggunakan basesyns

//menggunakan optimasi
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1000000;
    long long total = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total += x;
    }

    cout << total << '\n';
    return 0;
}

//tidak menggunakan optimasi