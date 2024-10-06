#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// Fungsi Mengembalikan NIlai
int Perkalian(int x, int y){
    return x * y;
};

// Fungsi Tanpa mengembalikan Nilai
void Sapaan(string Nama){
    cout << "Helo Welcome Back " << Nama;
}

int main(){
    cout << Perkalian(5,5) << endl;

    Sapaan("Reza");

    vector<int> bilanganPositif {
        10,5,6,4,3,2,8,9,7,1
    };

    sort(bilanganPositif.begin(),bilanganPositif.end());

    for(int i=0;i<bilanganPositif.size();i++){
        cout << bilanganPositif[i];
    };
}