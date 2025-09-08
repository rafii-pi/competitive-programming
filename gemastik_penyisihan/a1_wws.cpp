#include <bits/stdc++.h>
#define int long long
using namespace std;

void cekData(vector<pair<int, int>> kss, int n, vector<int>& res) {
    for (int i = 0; i < n; i++){
        if (kss[i].second < 2) {
            int kalah = 1;
            res.push_back(kalah);
        }
        else if (kss[i].second < 4){
            int kalah = 2;
            res.push_back(kalah);
        }
        else if (kss[i].second < 8){
            int kalah = 3;
            res.push_back(kalah);
        }
        else if (kss[i].second < 16){
            int kalah = 4;
            res.push_back(kalah);
        }
        else if (kss[i].second < 32){
            int kalah = 5;
            res.push_back(kalah);
        }
        else if (kss[i].second < 64){
            int kalah = 6;
            res.push_back(kalah);
        }
        else if (kss[i].second < 128){
            int kalah = 7;
            res.push_back(kalah);
        }
        else if (kss[i].second < 256){
            int kalah = 8;
            res.push_back(kalah);
        }
        else if (kss[i].second < 512){
            int kalah = 9;
            res.push_back(kalah);
        }
        else if (kss[i].second < 1024){
            int kalah = 10;
            res.push_back(kalah);
        }
        else if (kss[i].second < 2048){
            int kalah = 11;
            res.push_back(kalah);
        }
        else if (kss[i].second < 4096){
            int kalah = 12;
            res.push_back(kalah);
        }
        else if (kss[i].second < 8192){
            int kalah = 13;
            res.push_back(kalah);
        }
        else if (kss[i].second < 16384){
            int kalah = 14;
            res.push_back(kalah);
        }
        else if (kss[i].second < 32768){
            int kalah = 15;
            res.push_back(kalah);
        }
        else if (kss[i].second < 65536){
            int kalah = 16;
            res.push_back(kalah);
        }
        else if (kss[i].second < 131072){
            int kalah = 17;
            res.push_back(kalah);
        }
        else if (kss[i].second < 262144){
            int kalah = 18;
            res.push_back(kalah);
        }
        else if (kss[i].second < 524288){
            int kalah = 19;
            res.push_back(kalah);
        } else {
            int kalah = 20;
            res.push_back(kalah);
        }
        
    }
    
}

void pangkat(int n, int& hasil){
    hasil = 0;
    for (int i = 0; i < n-1; i++){
        hasil += 2*2;
    }
    
}

void inputData(vector<pair<int, int>>& ks, int z) {
    for (int i = 0; i < z; i++) {
        int x, y;
        cin >> x >> y;
        ks.push_back({x, y});
    }
}

void outputData(vector<pair<int, int>>& ks, int z) {
    for (int i = 0; i < z; i++) {
        cout << "data-" << i+1 << ". (" << ks[i].first << ", " << ks[i].second << ")" << endl;
    }
}


int32_t main(){
    int n;
    cin >> n;
    vector<pair<int, int>> kasus;

    vector<int> babak;

    inputData(kasus, n);

    // for (int i = 0; i < ; i++) {
    //     /* code */
    // }
    
    cout << endl << endl;
    outputData(kasus, n);

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < pow(2, kasus[i].first); j++){
    //         /* code */
    //         if (j+1 == kasus[i].second) {
    //             cout << "k" << " ";
    //         } else {
    //             cout << j+1 << " ";
    //         }
            
    //     }
    //     cout << endl;
    // }
    
    cout << endl << endl;

    cekData(kasus, n, babak);

    for (auto x: babak) cout << x << " ";
    

}