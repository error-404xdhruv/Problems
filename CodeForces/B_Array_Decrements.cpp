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
        vl a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
            {
                flag = false;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            vl temp;
            for (int i = 0; i < n; i++)
            {
                temp.push_back(a[i] - b[i]);
            }
            l counter = *max_element(temp.begin(), temp.end());
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= counter)
                {
                    a[i] = a[i] - counter;
                }
                else
                {
                    a[i] = 0;
                }
            }
            if (a == b)
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