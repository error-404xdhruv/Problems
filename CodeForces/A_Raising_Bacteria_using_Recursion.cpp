#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define vi vector<long long>
#define si string
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int bacteriacalc(int n, int count)
{
    int sum = 0;
    int diff = INT_MAX;
    int i = 0;
    while (sum < n)
    {
        sum = 1 << i;
        if (sum > n)
        {
            break;
        }
        diff = n - sum;
        i++;
    }
    if (diff > 0)
    {
        count++;
        return bacteriacalc(diff, count);
    }
    else
    {
        return count;
    }
    return 9;
}

int32_t main()
{
    fast;
    int n;
    cin >> n;
    int count = 1;
    cout << bacteriacalc(n, count);
}