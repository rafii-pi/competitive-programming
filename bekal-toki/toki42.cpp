#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    long long total = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }

    for (int i = 0; i < N; i++) {
        cout << (total - A[i]) << endl;
    }

    return 0;
}
