#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l n;
    cin >> n;
    vl v(n);
    for (l i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    l q;
    cin >> q;
    while (q--)
    {
        l temp;
        cin >> temp;
        l s = 0, e = n - 1;
        l count = 0;
        while (s <= e)
        {
            l mid = s + (e - s) / 2;
            if (v[mid] <= temp)
            {
                count = mid + 1;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}