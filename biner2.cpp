#include <iostream>
#include <cmath>

typedef unsigned long long ull;

// Function to calculate the N-th number in the sequence with exactly 30 '1's in binary
ull calculateNthNumber(ull N) {
    // The pattern suggests using combinations of 30 bits set to '1'
    ull base = (1ULL << 30) - 1; // This gives us a number with exactly 30 '1's
    return base * N;
}

int main() {
    ull N;
    std::cin >> N;

    ull nthNumber = calculateNthNumber(N);
    std::cout << nthNumber << std::endl;

    return 0;
}
