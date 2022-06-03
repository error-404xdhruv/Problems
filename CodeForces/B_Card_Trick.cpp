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
        l n;
        cin >> n;
        vl v;
        for (l i = 0; i < n; i++)
        {
            l a;
            cin >> a;
            v.push_back(a);
        }
        l m;
        cin >> m;
        vl v1;
        l sum = 0;
        for (l i = 0; i < m; i++)
        {
            l a;
            cin >> a;
            v1.push_back(a);
            sum += a;
        }
        cout << v[sum % n] << endl;
    }

    return 0;
}