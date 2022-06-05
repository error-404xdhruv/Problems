#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l d, a, b;
        cin >> d >> a >> b;
        if (d == a + b || d == abs(a - b))
        {
            cout << 1 << endl;
        }
        else if ((d > abs(a - b)) && (d < a + b))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl ;
        }
    }

    return 0;
}