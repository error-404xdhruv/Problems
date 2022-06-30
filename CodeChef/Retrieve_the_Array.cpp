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
        l n;
        cin >> n;
        vl b(n);
        l temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            temp += b[i];
        }
        for (l i = 0; i < n; i++)
        {
            cout << b[i] - temp / (n + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}