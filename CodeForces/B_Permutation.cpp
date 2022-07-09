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
        int n;
        cin >> n;
        int v[n + 1];
        bool flags[n + 1];
        memset(flags, true, sizeof(flags));
        std ::iota(v, v + n, 0);
        vi ans;
        for (int i = 1; i <= n; i++)
        {
            if (flags[i] == true)
            {
                ans.push_back(i);
                flags[i] = false;
                int temp = i * 2;
                while (temp <= n and flags[temp] == true)
                {
                    ans.push_back(temp);
                    flags[temp] = false;
                    temp *= 2;
                }
            }
        }
        cout << 2 << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl ;
    }

    return 0;
}