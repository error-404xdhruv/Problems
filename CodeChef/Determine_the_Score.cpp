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
        int x, n;
        cin >> x >> n;
        cout << (x / 10) * n << endl;
    }

    return 0;
}