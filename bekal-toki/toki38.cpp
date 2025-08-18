#include <iostream>
using namespace std;

//mind blowing alamak, memamnggil fungsi dirinya sendiri
int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    cout << faktorial(12) << endl;
}
