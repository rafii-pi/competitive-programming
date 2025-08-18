#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    size_t pos;
    while ((pos = S.find(T)) != string::npos) {
        S.erase(pos, T.length());
    }

    cout << S << '\n';
    return 0;
}
