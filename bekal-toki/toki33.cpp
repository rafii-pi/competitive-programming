#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long jumlah = 0;
        for (string s : data) {
            jumlah += stoll(s);
        }
        return to_string(jumlah);
    } else if (op == '*') {
        long long hasil = 1;
        for (string s : data) {
            hasil *= stoll(s);
        }
        return to_string(hasil);
    } else {
        return "KESALAHAN";
    }
}

int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
