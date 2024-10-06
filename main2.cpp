#include <iostream>
using namespace std;

int main()
{
    // Penggunaan getline hanya tipe data string dan tanpa ada keterengan
    // Penggunaan cout dan cin bisa berbagai tipe data dan ada keterangan saat mmenginput data
    // int x,y;
    // int pengurangan;

    // cout << "Masukan Nilai x: ";
    // cin >> x;
    // cout << "Masukan Nilai y: ";
    // cin >> y;


    // pengurangan = x - y;

    // cout << "Hasil dari pengurangan x dan y adalah: " << pengurangan;
    

    // Contoh penggunaan Getline
    string pesanAwal;
    
    getline(cin, pesanAwal);
    cin >> pesanAwal;
    cout << pesanAwal << endl;
    
    return 0;
}