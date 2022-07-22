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
    l n;
    cin >> n;
    if ((n & 1) == 1)
    {
        cout << 1 * (n / 2) - n << endl;
    }
    else
    {
        cout << 1 * (n / 2) << endl;
    }

    return 0;
}