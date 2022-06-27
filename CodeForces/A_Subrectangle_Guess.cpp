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
        int n, m;
        cin >> n >> m;
        l maxi = INT_MIN;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                l temp;
                cin >> temp;
                if (temp > maxi)
                {
                    maxi = temp;
                    a = i, b = j;
                }
            }
        }
        cout << max(a + 1, n - a) * max(b + 1, m - b) << endl;
    }

    return 0;
}