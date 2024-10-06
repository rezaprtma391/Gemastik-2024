#include <iostream>
using namespace std;

int main()
{
    int n;
    int m, o;
    int x;
    int y;
    int z;
    cin >> n;

    if (1 <= n <= 1000)
    {
        int v[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sum = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (v[i] - sum < 0)
            {
                y += 1;
                m = i + 1;
            }
            else if (v[i] - sum > 0)
            {
                z = v[i] - sum;
                y += 1;
                o = i + 1;
            }
            else
            {
                x += 1;
            }
        }
        if (y == 2)
        {
            cout << z << ' ' << o << ' ' << m;
        }
        else if (x == n)
        {
            cout << "Sesuai";
        }
        else
        {
            cout << "Tidak Sesuai";
        }
    }
    return 0;
}