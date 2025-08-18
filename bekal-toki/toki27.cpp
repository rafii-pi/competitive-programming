#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        c = toupper(c);             // Ubah ke huruf kapital
        if (c == 'Z') c = 'A';      // Jika Z, ubah jadi A
        else c = c + 1;             // Jika bukan Z, geser ke huruf setelahnya
        cout << c;
    }
    cout << endl;
}
