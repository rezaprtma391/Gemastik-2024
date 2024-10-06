#include <iostream>
using namespace std;

int min_hari(int A, int B, int C, int D) {
    int hari = 0;
    int sisa[4] = {A, B, C, D};

    while (sisa[0] + sisa[1] + sisa[2] + sisa[3] > 0) {
        int makan = 0;
        for (int i = 0; i < 4; i++) {
            if (sisa[i] > 0 && makan < 3) {
                if (i == 0 && sisa[1] > 0) {
                    makan += 1;
                    sisa[i] -= 1;
                } else if (i == 2 && sisa[3] > 0) {
                    continue;
                } else {
                    makan += 1;
                    sisa[i] -= 1;
                }
            }
        }
        hari += 1;
    }

    return hari;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << min_hari(A, B, C, D) << endl;
    return 0;
}