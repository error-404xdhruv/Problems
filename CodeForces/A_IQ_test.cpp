#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, odd = 0, even = 0;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if ((v[i] & 1) == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if (odd == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i] & 1) == 1)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i] & 1) != 1)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}