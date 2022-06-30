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
        vl a(n * 2);
        vl odd, even;
        for (l i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 1)
            {
                odd.push_back(a[i]);
            }
            else
            {
                even.push_back(a[i]);
            }
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        l os = odd.size(), es = even.size();
        if (os == es)
        {
            cout << 0 << endl;
        }
        else if (os < es)
        {
            l req = es - n;
            vl temp;
            for (l i = 0; i < es; i++)
            {
                l count = 0;
                while (even[i] % 2 == 0)
                {
                    even[i] /= 2;
                    count++;
                }
                temp.push_back(count);
            }
            sort(temp.begin(), temp.end());
            l sum = 0;
            for (l i = 0; i < req; i++)
            {
                sum += temp[i];
            }
            cout << sum << endl;
        }
        else
        {
            cout << abs(os - n) << endl;
        }
    }

    return 0;
}