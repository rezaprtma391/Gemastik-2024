#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

typedef unsigned long long ull;

    string desimalkebiner(ull n) {
    string biner = bitset<64>(n).to_string();
    size_t pos = biner.find('1'); 
    return biner.substr(pos); 
}

ull calculateNthNumber(ull N) {
    ull currentNumber = 1073741823; 
    ull increment = 1610612735 - 1073741823; 

    for (ull i = 1; i < N; ++i) {
        currentNumber += increment;
    }

    return currentNumber;
}

int main() {
    ull N;
    cin >> N;

    ull nthNumber = calculateNthNumber(N);
    cout << nthNumber << endl;

    return 0;
}
