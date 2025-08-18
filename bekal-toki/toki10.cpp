//Olimpiade Sains Al Azhar 2025 Final (Mirror, Unrated, Indonesian Only)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> data = {A, B, C};

    //gabole sama
    if (A == B || A == C || B == C) {
        cout << -1 << endl;
        return 0;
    }

    //hitung berapa kali nuker
    int swaps = 0;
    for (int i = 0; i < 2; i++) {
        if (data[i] > data[i + 1]) {
            swap(data[i], data[i + 1]);
            swaps++;
        }
    }
    //cek ulang
    if (data[0] > data[1]) {
        swap(data[0], data[1]);
        swaps++;
    }

    //mastikan lagi
    if (data[0] < data[1] && data[1] < data[2]) {
        cout << swaps << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
