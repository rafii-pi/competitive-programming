#include <bits/stdc++.h>
using namespace std;

string tabel1[4][4] = {
    {"AB", "DC", "CC", "CB"},
    {"CA", "DA", "CD", "DD"},
    {"BC", "AA", "BA", "DB"},
    {"BD", "AD", "BB", "AC"}
};

string tabel2[4][4] = {
    {"CD", "BB", "AC", "CC"},
    {"CB", "DB", "AD", "DD"},
    {"DA", "DC", "BC", "BD"},
    {"AA", "BA", "CA", "AB"}
};

int idx(char c) {
    return c - 'A';
}

int main() {
    string kata;
    cin >> kata;
    int n = kata.size();
    string hasil = "";

    for (int i = 0; i < n; i += 2) {
        char c1 = kata[i];
        char c2 = kata[i+1];
        // Tahap 1
        string tahap1 = tabel1[idx(c1)][idx(c2)];
        // Tahap 2
        string tahap2 = tabel2[idx(tahap1[0])][idx(tahap1[1])];
        hasil += tahap2;
    }
    cout << hasil << endl;
}