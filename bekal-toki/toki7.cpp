#include <bits/stdc++.h>
using namespace std;

void perulangan1(){
    int total = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
            total++;
        }
    }
    cout << endl;
    cout << "Perulangan 1 : "<< total << endl;
}

void perulangan2(){
    int ulang = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                ulang++;
                break;
            }
        }
    }
    cout << endl;
    cout << "Perulangan 2 : " << ulang << endl;
}

void perulangan3(){
    int ulang = 0;
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) {
            continue;
        }
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
                ulang++;
            }
        }
    }
    cout << endl;
    cout << "Perulangan 2 : " << ulang << endl;
}

void perulangan4(){
    int ulang = 0;
    int n = 47;
    while (true) {
        if (n == 0) {
            break;
        }
        cout << "*";
        ulang++;
        n = n / 10;
    }
    cout << endl;
    cout << "Perulangan 2 : " << ulang << endl;
}

int main(){
    perulangan1();
    cout << endl;
    perulangan2();
    cout << endl;
    perulangan3();
    cout << endl;
    perulangan4();

}