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
        int a, b;
        cin >> a >> b;
        while (a > 0 and b > 0)
        {
            cout << 10;
            --a, --b;
        }
        while (a > 0)
        {
            cout << 0;
            --a;
        }
        while (b > 0)
        {
            cout << 1;
            b--;
        }

        cout << "\n";
    }

    return 0;
}