#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vi v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[n + i] - v[i] < x)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}