#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l q;
    cin >> q;
    while (q--)
    {
        l a, b, n, s;
        cin >> a >> b >> n >> s;
        if (a * n <= s)
        {
            if (s - (a * n) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if ((s % n) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}