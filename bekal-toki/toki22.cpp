#include <bits/stdc++.h>
#include <string>
using namespace std;

void kali_dua(int n) {
    n *= 2;
}

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    cout << s.substr(32, 8) << endl;

    int a = 10;
    kali_dua(a);
    cout << a << endl;
}
