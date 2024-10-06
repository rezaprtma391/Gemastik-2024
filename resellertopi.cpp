#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int B[N], J[N];
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> J[i];
    }

    int maxKeuntungan = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 2; j < N; j++) {
            if (J[j] > B[i]) {
                maxKeuntungan = max(maxKeuntungan, J[j] - B[i]);
            }
        }
    }

    if (maxKeuntungan > 0) {
        cout << maxKeuntungan << endl;
    } else {
        cout << "tidak mungkin" << endl;
    }

    return 0;
}