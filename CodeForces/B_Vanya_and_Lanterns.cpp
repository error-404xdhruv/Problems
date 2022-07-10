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
    l n, len;
    cin >> n >> len;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    l maxi = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, v[i] - v[i - 1]);
    }
    l temp = max(v[0], len - v[n - 1]) * 2;
    l ans = max(temp, maxi);
    cout << fixed << setprecision(10) << ans/2.0 << endl ;

    return 0;
}