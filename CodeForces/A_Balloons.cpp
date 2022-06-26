#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (n < 2)
    {
        cout << -1 << endl;
    }
    else if (n == 2)
    {
        if (v[0] == v[1])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << "\n"
                 << 1 << endl;
        }
    }

    else
    {
        sum -= v.back();
        if (sum == v.back())
        {
            cout << n - 2 << endl;
            for (int i = 1; i <= n - 2; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << n - 1 << endl;
            for (int i = 1; i <= n - 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}