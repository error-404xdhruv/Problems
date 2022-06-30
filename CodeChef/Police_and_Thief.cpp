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
        l x, y;
        cin >> x >> y;
        cout << abs(x - y) << endl;
    }

    return 0;
}