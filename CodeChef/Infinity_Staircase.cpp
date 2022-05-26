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
        l count = 0;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (l i = 1; n > 0; i++)
            {
                if ((n & 1) == 1)
                {
                    n -= 3;
                }
                else
                {
                    n -= 2;
                }
                count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}