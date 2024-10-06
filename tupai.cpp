#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> tiang(n);
    for (int i = 0; i < n; i++) {
        cin >> tiang[i];
    }

    // sesi gema
    sort(tiang.begin(), tiang.end());
    int maxKesulitanGema = 0;
    for (int i = 1; i < n; i++) {
        maxKesulitanGema = max(maxKesulitanGema, abs(tiang[i] - tiang[i - 1]));
    }

    // sesi astik
    vector<int> urutanAstik;
    for (int i = 0; i < (n + 1) / 2; i++) {
        urutanAstik.push_back(tiang[i]);
        if (i + (n + 1) / 2 < n) {
            urutanAstik.push_back(tiang[n - i - 1]);
        }
    }

    int maxKesulitanAstik = 0;
    for (int i = 1; i < n; i++) {
        maxKesulitanAstik = max(maxKesulitanAstik, abs(urutanAstik[i] - urutanAstik[i - 1]));
    }

    cout << maxKesulitanGema << "\n";
    cout << maxKesulitanAstik << "\n";

    return 0;
}