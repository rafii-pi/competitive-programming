#include <bits/stdc++.h>
using namespace std;

#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf(x, v) v.insert(v.begin(), x)

void display(vector<int> n){
    for (int x: n) cout << x << " ";
}

int main(){
    rafiieeyy

    cout << "haii!" << endl;
    vector<int> data = {1, 2, 3};
    cout << "Setelah    : ";
    //sebelum pb dan pf
    display(data);
    cout << endl;
    
    //setelah pb
    cout << "Setelah pb : ";
    data.pb(5);
    display(data);
    cout << endl;
    
    //setelah pb dan pf
    cout << "Setelah pf : ";
    pf(7, data);
    display(data);
    cout << endl;

}