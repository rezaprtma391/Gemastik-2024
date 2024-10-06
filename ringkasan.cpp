#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> newVector;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1] && !newVector.empty() && i > 0)
        {
            newVector.push_back(a[i]);
        }

        if (newVector.empty())
        {
            newVector.push_back(a[i]);
        }
    }
    
    for (int i = 0; i < newVector.size(); i++)
    {

        if (i == 0) {
            cout << newVector[i];
        } else if (newVector[i] == newVector[i - 1] + 1) {
            if(newVector[i] != newVector[i + 1] - 1) {
                cout << "-" << newVector[i];
            }
        } else {
            cout << "," << newVector[i];
        }
    }

    return 0;
}