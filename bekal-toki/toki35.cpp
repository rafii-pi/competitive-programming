#include <bits/stdc++.h>
using namespace std;

long long faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n - 1) * n;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    cout << faktorial(n) + faktorial(m) << endl;
    
}