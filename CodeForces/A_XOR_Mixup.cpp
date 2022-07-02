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
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    ans = ans;
                }
                else
                {
                    ans = ans ^ v[j];
                }
            }
            if (v[i] == ans)
            {
                cout << v[i] << endl;
                break;
            }
        }
    }

    return 0;
}