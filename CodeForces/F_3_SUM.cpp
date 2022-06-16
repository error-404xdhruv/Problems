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
        l n;
        cin >> n;
        vl v(n);
        map<int, int> m;
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i] % 10]++;
        }

        if (
            (m[0] > 0 and m[9] > 0 and m[4] > 0) or
            (m[0] > 0 and m[8] > 0 and m[5] > 0) or
            (m[0] > 0 and m[7] > 0 and m[6] > 0) or
            (m[0] > 0 and m[1] > 0 and m[2] > 0) or
            (m[0] > 1 and m[3] > 0) or

            (m[1] > 0 and m[9] > 0 and m[3] > 0) or
            (m[1] > 0 and m[8] > 0 and m[4] > 0) or
            (m[1] > 0 and m[7] > 0 and m[5] > 0) or
            (m[1] > 0 and m[6] > 1) or
            (m[1] >= 3) or

            (m[2] > 1 and m[9] > 0) or
            (m[2] > 0 and m[8] > 0 and m[3] > 0) or
            (m[2] > 0 and m[7] > 0 and m[4] > 0) or
            (m[2] > 0 and m[6] > 0 and m[5] > 0) or

            (m[3] > 1 and m[7] > 0) or
            (m[3] > 0 and m[6] > 0 and m[4] > 0) or
            (m[3] > 0 and m[5] > 1) or

            (m[4] > 1 and m[5] > 0) or

            (m[9] > 1 and m[5] > 0) or
            (m[9] > 0 and m[6] > 0 and m[8] > 0) or
            (m[9] > 0 and m[7] > 1) or

            (m[8] > 1 and m[7] > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}