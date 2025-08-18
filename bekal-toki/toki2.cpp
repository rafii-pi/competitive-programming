#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nilai = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
            
        }
    }

    cout << endl << endl;
    
    
    int no = 0;
    vector<string> mobil = {"bmw", "fortune"};
    mobil.push_back("tambahan");
    for (string car: mobil){
        cout << car << endl;
    }
    
    cout << endl << endl;
    //versi 2
    for (int i = 0; i < mobil.size(); i++){
        cout << i + 1 << ". " << mobil[i] << endl;
    }
    

}

