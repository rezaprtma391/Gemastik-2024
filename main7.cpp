#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string panjang;
    int counter = 0;
    // Cout dan cin input int dan string
    // cout << "Masukkan panjang: ";
    // cin >> panjang;

    // Getline untuk input string
    getline(cin, panjang);

    // for(int i=0;i<panjang.length();i++){
    // cout << "Ini adalah baris ke " << i << endl;
    // }

    while(counter < panjang.length()){
        string a = "Panjang yang diinput adalah ";
        cout << a[counter] << endl;
        counter++;
    }
}