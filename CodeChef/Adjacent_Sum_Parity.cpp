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
        int n;
        cin >> n;
        vi b(n) ;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vi ans ;
        ans.push_back(1);
        for (int i = 1; i < n; i++)
        {
            ans.push_back(ans[i - 1] + b[i - 1]);
        }
        int parity = (ans[0] + ans[n - 1]) % 2;
        if (parity == b[n - 1])
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