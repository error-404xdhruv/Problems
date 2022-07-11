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
    l n, k;
    cin >> n >> k;
    l maxi = INT_MIN;
    for (l i = 0; i < n; i++)
    {
        l f, t;
        cin >> f >> t;
        if (t > k)
        {
            maxi = max(maxi, f - (t - k));
        }
        else
        {
            maxi = max(maxi, f);
        }
    }
    cout << maxi << endl;

    return 0;
}