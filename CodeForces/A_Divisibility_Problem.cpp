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
    int t;
    cin >> t;
    while (t--)
    {
        l a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (b * (a / b + 1)) - a << endl;
        }
    }

    return 0;
}