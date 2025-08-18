#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);

void absolut(int A, int B, int K, int x){
    for (int i = 0; i < K; i++){
        int fungsi = abs((A * x) + B);
        x = fungsi;
    }
    cout << x;
}

int32_t main(){
    rafiieeyy
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    absolut(A, B, K, x);
}
