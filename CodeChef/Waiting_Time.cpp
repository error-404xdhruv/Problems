#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l k, x;
        cin >> k >> x;
        cout << (k * 7) - x << endl;
    }

    return 0;
}