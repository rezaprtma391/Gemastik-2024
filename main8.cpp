#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    // Array 
    int angka[10] = {1,2,3,4,5,6,7,8,9,10};
    // Foreach 
    for(int i : angka){
        cout << i << endl;
    }

    // Vector
    vector<int> angka2 = {1,2,3,4,5,6,7,8,9,10};
    // Foreach
    for(int i : angka2){
        cout << i << endl;
    }

    cout << "Ini adalah vector " << angka[1] << endl;
    // For
    for(int counter=0;counter<angka2.size();counter++){
        cout << angka2[counter] << endl;
    }

    // Map
    map<string, string> mobil = {
        {"Merah", "Ferrari"},
        {"Biru", "Lamborghini"},
        {"Hitam", "Bugatti"}
    };
    // Foreach 
    for(int i=0;i<1;i++){
        cout << mobil.find("Biru")->second << endl;
    }
    

    return 0;
}

// MEthod size() pada vector digunakan untuk menghitung jumlah elemen pada vector atau array
// Method push_back() pada vector digunakan untuk menambahkan elemen pada vector atau array
// Method find() pada map digunakan untuk mencari elemen pada map
// Method insert() pada map digunakan untuk menambahkan elemen pada map
// Method erase() pada map digunakan untuk menghapus elemen pada map
// Method Length() pada string digunakan untuk menghitung jumlah karakter pada string
// Method Sort() pada array digunakan untuk mengurutkan elemen pada array