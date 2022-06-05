#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    sort(s.begin(), s.end());
    char temp = s[0];
    l count = 1;
    vl countStore;
    for (l i = 1; i < n; i++)
    {
        if (s[i] == temp)
        {
            count++;
            if (i == n - 1)
            {
                countStore.push_back(count);
            }
        }
        else
        {
            countStore.push_back(count);
            count = 1;
            temp = s[i];
            if (i == n - 1)
            {
                countStore.push_back(count);
            }
        }
    }
    sort(countStore.begin(), countStore.end(), greater<int>());
    l ans = 0;
    for (l i = 0; (i < countStore.size()) && (k > 0); i++)
    {
        if (countStore[i] <= k)
        {
            ans += countStore[i] * countStore[i];
            k -= countStore[i];
        }
        else
        {
            ans += k * k;
            k -= k;
        }
    }
    cout << ans << endl;

    return 0;
}