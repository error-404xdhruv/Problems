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
        vl v(n);
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (count(v.begin(), v.end(), 0) == n)
        {
            cout << 0 << endl;
        }
        else
        {
            bool flag = true;
            vl temp;
            for (l i = 0; i < n; i++)
            {
                if (v[i] != 0)
                {
                    temp.push_back(i);
                }
            }
            for (l i = 1; i < temp.size(); i++)
            {
                if (temp[i] - temp[i - 1] > 1)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}