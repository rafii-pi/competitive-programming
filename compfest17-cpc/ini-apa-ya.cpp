#include <bits/stdc++.h>
using namespace std;

bool isAllDigits(const string &s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

bool isAllLetters(const string &s) {
    return all_of(s.begin(), s.end(), [](char c){ return c >= 'a' && c <= 'z'; });
}

int main() {
    string S;
    cin >> S;

    if (S == "0") {
        cout << "nol\n";
    }
    else if (isAllLetters(S)) {
        cout << "kata\n";
    }
    else if (S[0] == '-') {
        string num = S.substr(1);
        if (!num.empty() && isAllDigits(num) && !(num.size() > 1 && num[0] == '0')) {
            cout << "bilangan bulat negatif\n";
        }
    }
    else if (isAllDigits(S)) {
        if (!(S.size() > 1 && S[0] == '0')) {
            cout << "bilangan bulat positif\n";
        }
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define fi first
// #define sec second
// string s;
// bool nig(){
//     for(auto i : s){
//         if(!(i >= 'a' && i <= 'z'))return false;
//         else return true;
//     }
// }
// int main(){
//     cin >> s;
//     if(s[0] == '-')cout << "bilangan bulat negatif";
//     else if(s[0] == '0')cout << "nol";
//     else if(nig())cout << "kata";
//     else cout << "bilangan bulat positif";
// }