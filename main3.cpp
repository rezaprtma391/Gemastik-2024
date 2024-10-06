#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void Halo(string name){
    cout << "Halo Guys!" << name;
}

int Pertambahan(int x, int y){
    return x + y;
};

int main()
{

    map<string, string> manusia {
        {"Nama", "Muhamad Reza Pratama"},
        {"Alamat", "Jl Parkit Raya Dl 4 NO 24"},
        {"Universitas", "Pamulang"}};

    cout << manusia["Nama"] << endl;

    vector<int> angka{
        1,
        4,
        2,
        3,
    };

    sort(angka.begin(), angka.end());

    for (int i = 0; i < angka.size(); i++)
    {
        cout << angka[i] << endl;
    };

    Halo("Reza\n");

    cout << Pertambahan(5,5);

    return 0;
}