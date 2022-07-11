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
    int n, c;
    cin >> n >> c;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, v[i] - v[i + 1]);
    }
    if ((maxi - c) > 0)
    {
        cout << maxi - c << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}