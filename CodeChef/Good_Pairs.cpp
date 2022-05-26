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
        vl v1;
        vl v2;
        for (l i = 0; i < n; i++)
        {
            l a;
            cin >> a;
            v1.push_back(a);
        }
        for (l i = 0; i < n; i++)
        {
            l a;
            cin >> a;
            v2.push_back(a);
        }
        l count = 0;
        for (l i = 0; i < n; i++)
        {
            for (l j = i + 1; j < n; j++)
            {
                if ((v1[i] ^ v1[j]) == (v2[i] ^ v2[j]))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}