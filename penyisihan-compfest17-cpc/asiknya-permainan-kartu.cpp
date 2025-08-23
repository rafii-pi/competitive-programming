//A. Asikanya Permainan Kartu
#include <bits/stdc++.h>
#define rafiieeyy ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long
using namespace std;

void entryKartu(vector<int>& a, vector<int>& b, int count){
    for (int i = 0; i < count; i++){
        cin >> a[i];
    }
    for (int i = 0; i < count; i++){
        cin >> b[i];
    }
    
}

void winKartu(vector<int> a, vector<int> b, int count, int& ansChanek, int& ansGanesh){
    for (int i = 0; i < count; i++){
        if (a[i] > b[i]){
            ansChanek += (a[i] - b[i]);
        }
        else if (b[i] > a[i]){
            ansGanesh += (b[i] - a[i]);
        }
    }
}

int32_t main(){
    rafiieeyy;
    int kartu, pakChanek = 0, pakGanesh = 0;
    cin >> kartu;

    vector<int> chanek(kartu);
    vector<int> ganesh(kartu);

    entryKartu(chanek, ganesh, kartu);
    winKartu(chanek, ganesh, kartu, pakChanek, pakGanesh);

    if (pakChanek > pakGanesh){
        cout << "Pak Chanek";
    }
    else if (pakGanesh > pakChanek){
        cout << "Pak Ganesh";
    }
    else {
        cout << "Mabar";
    }
    

}