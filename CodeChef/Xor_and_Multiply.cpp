/* #include <bits/stdc++.h>
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
        l a, b, n;
        cin >> n >> a >> b;
        vl aa, bb, ans;
        for (l i = 0; i < n; i++)
        {
            aa.push_back(a % 2);
            bb.push_back(b % 2);
            a /= 2;
            b /= 2;
        }
        bool flag = true;
        l finalAns = 0;
        for (l i = n - 1; i >= 0; i--)
        {
            if (aa[i] == 0 and bb[i] == 0)
            {
                ans.push_back(1);
            }
            else if (aa[i] == 1 and bb[i] == 1)
            {
                ans.push_back(0);
            }
            else
            {
                if (flag)
                {
                    ans.push_back(1 - aa[i]);
                    flag = false;
                }
                else
                {
                    ans.push_back(1 - bb[i]);
                }
            }
            finalAns *= 2;
            finalAns += ans[i];
        }
        cout << finalAns << endl;
    }

    return 0;
} */

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
        l n, a, b;
        cin >> n >> a >> b;
        l aa[n], bb[n], ans[n];
        for (l i = 0; i < n; i++)
        {
            aa[i] = a % 2;
            a /= 2;
            bb[i] = b % 2;
            b /= 2;
        }
        bool flag = true;
        l temp = 0;
        for (l i = n - 1; i >= 0; i--)
        {
            if (aa[i] == 0 and bb[i] == 0)
            {
                ans[i] = 1;
            }
            else if (aa[i] == 1 and bb[i] == 1)
            {
                ans[i] = 0;
            }
            else
            {
                if (flag == true)
                {
                    ans[i] = 1 - aa[i];
                    flag = false;
                }
                else
                {
                    ans[i] = 1 - bb[i];
                }
            }
            temp *= 2;
            temp += ans[i];
        }
        cout << temp << endl;
    }

    return 0;
}