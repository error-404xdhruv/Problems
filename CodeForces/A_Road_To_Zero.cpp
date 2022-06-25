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
        l x, y, a, b;
        cin >> x >> y >> a >> b;
        l ans = (max(x, y) - min(x, y)) * (a) + min(((min(x, y)) * b), (min(x,y)*2*a));
        cout << ans << endl;
    }

    return 0;
}