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
        l a, b;
        cin >> a >> b;
        if (max(a, b) >= 2 * min(a, b))
        {
            cout << min(a, b) << endl;
        }
        else
        {
            cout << (min(a, b) + max(a, b)) / 3 << endl;
        }
    }

    return 0;
}