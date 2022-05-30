#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int t;
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
        if (n < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            int count = 1;
            l temp = v[0];
            bool flag = false;
            l ans;
            for (l i = 1; i < n; i++)
            {
                if (v[i] == temp)
                {
                    count++;
                    if (count == 3)
                    {
                        flag = true;
                        ans = v[i];
                        goto here;
                    }
                }
                else
                {
                    temp = v[i];
                    count = 1;
                }
            }
        here:
            if (flag == true)
            {
                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}