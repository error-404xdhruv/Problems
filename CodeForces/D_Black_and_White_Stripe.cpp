#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i - 1];
        if (s[i - 1] == 'B')
        {
            v[i]++;
        }
    }
    int temp = k;
    for (int i = k; i <= n; i++)
    {
        temp = min(temp, k - (v[i] - v[i - k]));
    }
    cout << temp << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}