#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    l y, k, n;
    cin >> y >> k >> n;
    if (y >= n)
    {
        cout << -1 << endl;
    }
    else
    {
        l x = ((y / k) + 1) * k - y, count = 0;
        if (x + y > n)
        {
            cout << -1 << endl;
        }
        while (x + y <= n)
        {
            cout << x << " ";
            // count++;
            x += k;
        }
        // if (count == 0)
        // {
        //     cout << -1 << endl;
        // }
    }
    return 0;
}
