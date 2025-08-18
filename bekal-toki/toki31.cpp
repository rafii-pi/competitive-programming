#include <bits/stdc++.h>
using namespace std;

vector<int> buat_vector(int n) {
    vector<int> hasil;
    for (int i = 1; i <= n; i++) {
        hasil.push_back(i * 2);
    }
    return hasil;
}

vector<int> buat_vector1(int n) {
    vector<int> hasil;
    for (int i = 1; i <= n; i++) {
        hasil.push_back(i * 2);
    }
    return hasil;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> genap = buat_vector(5);
    for (int x : genap) cout << x << " ";

    cout << endl;

    vector<int> genap1 = buat_vector1(5);
    for (int x : genap1) cout << x << " ";
}



