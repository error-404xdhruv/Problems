#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l n, m;
    cin >> n >> m;
    l i = 1, ans = 0;
    for (l j = 0; j < m; j++)
    {
        l work;
        cin >> work;
        if (work >= i)
        {
            ans += (work - i);
        }
        else
        {
            ans += n - (i - work);
        }
        i = work;
    }
    cout << ans << endl;

    return 0;
}