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
        int n;
        cin >> n;
        vl v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int count1 = 0, count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                count++;
                count1++;
            }
            else
            {
                count = 1;
            }
        }
        if (count1 & 1 == 1)
        {
            cout << n - (count1 + 1) << endl;
        }
        else
        {
            cout << n - (count1) << endl;
        }
    }

    return 0;
}