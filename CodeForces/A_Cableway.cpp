#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    r = (r + 1) / 2;
    g = (g + 1) / 2;
    b = (b + 1) / 2;
    int m = max(r, max(g, b));
    if (m == b)
    {
        cout << 32 + (m - 1) * 3;
    }
    else if (m == g)
    {
        cout << 31 + (m - 1) * 3;
    }
    else if (m == r)
    {
        cout << 30 + (m - 1) * 3;
    }

    return 0;
}