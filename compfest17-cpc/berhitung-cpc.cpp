#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long
using namespace std;

int32_t main(){
    rafiieeyy;
    int a, b;
    char tanda;
    cin >> a >> tanda >> b;

    if (tanda == '+'){
        cout << a + b;
    }
    else if (tanda == '-') {
        cout << a -b ;
    }
    else if (tanda == '*'){
        cout << a * b;
    }
    else if (tanda == '%') {
        cout << a % b;
    }
    else {
        cout << a / b;
    }
    
}