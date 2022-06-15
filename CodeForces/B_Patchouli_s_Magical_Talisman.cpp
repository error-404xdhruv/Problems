#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        vl v(n);
        l countOdd = 0;
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
            if ((v[i] & 1) == 1)
            {
                countOdd++;
            }
        }
        if (countOdd > 0)
        {
            cout << n - countOdd << endl;
        }
        else
        {
            l temp = INT_MAX;

            for (l i = 0; i < n; i++)
            {
                l count = 0;
                while (v[i] % 2 == 0)
                {
                    count++;
                    v[i] /= 2;
                }
                temp = min(temp, count);
            }

            cout << n + temp - 1 << endl;
        }
    }

    return 0;
}