#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        vi kv(12);
        for (auto &x : kv)
        {
            cin >> x;
        }
        sort(kv.begin(), kv.end());
        int sum = 0, count = 0;
        int i = 11;
        while (sum < k && i >= 0)
        {
            sum += kv[i];
            count++;
            i--;
        }
        if (sum < k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}