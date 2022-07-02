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
        int n, k;
        cin >> n >> k;
        vl v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (k == 1)
        {
            cout << (n - 1) / 2 << endl;
        }
        else
        {
            int count = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] > v[i - 1] + v[i + 1])
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}