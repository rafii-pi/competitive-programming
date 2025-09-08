#include <bits/stdc++.h>
#define int long long
using namespace std;

void inputData(vector<int>& datas, int n) {
    for (int i = 0; i < n; i++){
        cin >> datas[i];
    }
    
}
void sortingData(vector<int> datas, int n, vector<int>& hasil) {
    for (int i = 0; i < n; i++){
        if (datas[i] > datas[i+1]) {
            int temp = datas[i];
            hasil.push_back(temp);
        }
    }
    
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);


    int n, a, b;
    cin >> n >> a >> b;
    vector<int> data(n);
    
    inputData(data, n);
    
    vector<int> hasilnya(n);
    sortingData(data, n, hasilnya);
    cout << endl << endl;
    for (auto x: hasilnya) cout << x << " ";


}