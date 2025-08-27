#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
//x nilai yang ingin di push dan v list tempat menyimpan nilai x yang di push ke list v
#define push_front(x, v) v.insert(v.begin(), x)
using namespace std;

int32_t main() {
    rafiieeyy

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    vector<int> data;

    while (x < y) {
        if (data.size() == 0){
            push_front(x, data);
            x = a * x + b;
        }
        else {
            data.push_back(x);
            x = a * x + b;
        }
        
    }
    // cout << data.size();
    // cout << endl;
    for (auto g: data) cout << g << endl;

}