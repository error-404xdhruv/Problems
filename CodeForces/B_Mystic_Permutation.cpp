#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n), ans(n);
        // iota is used to make an array with conitnuous numbers
        iota(ans.begin(), ans.end(), 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == ans[i] && i == n - 1)
                {
                    swap(ans[i], ans[i - 1]);
                }
                else if (v[i] == ans[i])
                {
                    swap(ans[i], ans[i + 1]);
                }
            }
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}