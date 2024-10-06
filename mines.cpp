#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    string pesanAwal;

    map<string, string> translation = {
        {"CD","CB"},
        {"CB","CC"},
        {"DA","BA"},
        {"AA","BB"},
        {"BB","AA"},
        {"DB","DC"},
        {"DC","AD"},
        {"BA","CD"},
        {"AC","DD"},
        {"AD","CA"},
        {"BC","AC"},
        {"CA","AB"},
        {"CC","DB"},
        {"DD","DA"},
        {"BD","BC"},
        {"AB","BD"}
    };

    getline(cin, pesanAwal);

    cin >> pesanAwal;

    for (int i = 0; i < pesanAwal.length(); i++) {
        if (i % 2 != 0) {
            string temp = "";
            temp.push_back(pesanAwal[i - 1]);
            temp.push_back(pesanAwal[i]);
            cout << translation.find(temp)->second;
        }
    }

    return 0;
}