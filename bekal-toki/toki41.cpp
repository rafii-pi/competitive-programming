#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> data(N);
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> data[i];
        total += data[i];
    }

    for (int i = 0; i < N; i++) {
        cout << (total - data[i]) << endl;
    }

    return 0;
}
