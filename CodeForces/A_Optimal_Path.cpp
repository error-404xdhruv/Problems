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
        l n, m;
        cin >> n >> m;
        l sum = (m * (m - 1)) / 2;
        sum += (n * ((n * m) + m)) / 2;
        cout << sum << endl;
    }

    return 0;
}