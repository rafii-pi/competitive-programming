#include <bits/stdc++.h>
using namespace std;

// Fungsi dekripsi Caesar Cipher untuk 1 nilai k
string caesarDecrypt(string s, int k) {
    string hasil = "";
    for (char c : s) {
        // Geser huruf mundur dengan mempertahankan siklus a-z
        char d = (c - 'a' - k + 26) % 26 + 'a';
        hasil += d;
    }
    return hasil;
}

int main() {
    string ciphertext = "epctxlvldtsdpxzrlvfcdfdtytmpcxlyqlle"; // Ganti ini dengan string terenkripsi kamu

    for (int k = 1; k < 26; k++) {
        string hasil = caesarDecrypt(ciphertext, k);
        cout << "k = " << k << " → " << hasil << '\n';
    }

    return 0;
}
