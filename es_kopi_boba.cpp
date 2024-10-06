#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_equal(const vector<int>& vec) {
    for (auto element : vec) {
        if( element != vec[0]) {
            return false;
        }
    }
    return true;
}

int main() {

    int n = 0;

    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    if (is_equal(v)) {
        cout << "SESUAI";
        return 0;
    }

    int max_id = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
            max_id = i;
        }
    }

    int min_id = 0;
    int min = v[0];

    for (int i = 0; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
            min_id = i;
        }
    }

    while (v[max_id] > v[min_id]) {
        v[max_id] = v[max_id] - 1;
        v[min_id] = v[min_id] + 1;
    }

    if(is_equal(v)) {
        cout << (max - min) / 2 << " " << max_id + 1 << " " << min_id + 1;
    } else {
        cout << "TIDAK SESUAI";
    }

    return 0;
}