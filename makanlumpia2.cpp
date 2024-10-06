#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int days = 2;

    while (A + B + C + D > 0)
    {
        int dailyQuota = 3;

        if (A > 0)
        {
            A -= min(A, dailyQuota);
            dailyQuota -= min(A, dailyQuota);
        }
        else if (B > 0 || C > 0 || D > 0)
        {
            if (B > 0 && (C > 0 || D > 0))
            {
                B -= min(B, dailyQuota);
                dailyQuota -= min(B, dailyQuota);

                if (dailyQuota > 0)
                {
                    int makanUdangIkan = min(C + D, dailyQuota);
                    if (C > 0)
                    {
                        C -= min(C, makanUdangIkan);
                        makanUdangIkan -= min(C, makanUdangIkan);
                    }
                    if (D > 0)
                    {
                        D -= min(D, makanUdangIkan);
                    }
                }
            }
            else if (B > 0)
            {
                B -= min(B, dailyQuota);
            }
            else if (C > 0 || D > 0)
            {
                int makanUdangIkan = min(C + D, dailyQuota);
                if (C > 0)
                {
                    C -= min(C, makanUdangIkan);
                    makanUdangIkan -= min(C, makanUdangIkan);
                }
                if (D > 0)
                {
                    D -= min(D, makanUdangIkan);
                }
            }
        }

        days++;
    }

    cout << days << endl;

    return 0;
}
