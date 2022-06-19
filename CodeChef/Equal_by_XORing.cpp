#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l a, b, n, z = 1;
        cin >> a >> b >> n;
        while (z < n)
        {
            z *= 2;
        }

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if ((a ^ b) >= 1 and (a ^ b) < n)
        {
            cout << 1 << endl;
        }
        else if ((a ^ b) < z)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}