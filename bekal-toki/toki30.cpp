//belajar vector

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> data = {10, 3};
    data.push_back(56);
    for(int x: data) cout << x << " ";

    data.insert(data.begin(), 1);  // Tambah 1 di depan
    // v = {1, 2, 3, 4}
    cout << endl;

    int ukuran = data.size();
    cout << "ukuran data : " << ukuran << "\n";
    for(int x: data) cout << x << " ";

    //2dimensi
    vector<vector<int>> tinggi = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << endl;

    for (int i = 0; i < tinggi.size(); i++) {
        for (int j = 0; j < tinggi[i].size(); j++) {
            cout << tinggi[i][j] << " ";
        }
        cout << endl;
    }

    cout << tinggi.size() << endl;

    
}
