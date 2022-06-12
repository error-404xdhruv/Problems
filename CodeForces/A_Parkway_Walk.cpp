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
        int n, m, sum = 0;
        cin >> n >> m;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sum -= v[0];

        m -= v[0];
        if (m >= sum)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << sum - m << endl;
        }
    }

    return 0;
}