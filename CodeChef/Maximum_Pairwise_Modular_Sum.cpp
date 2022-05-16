#include <bits/stdc++.h>
#define l long long
using namespace std;

l calculateMod(l i, l j, l m)
{
    if (i - j < 0)
    {
        l n = abs(i - j);
        return ((n / m) + 1) * m - n;
    }
    else
    {
        return (i - j) % m;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n, m;
        cin >> n >> m;
        int arr[200000];
        for (l i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> ans;
        sort (arr, arr+n) ;
        l e = n-1 ;
        for (l i = 0; i < n; i++)
        {
            ans.push_back(arr[i] + arr[e] + calculateMod(arr[i], arr[e], m));
        }
                
        sort(ans.begin(), ans.end(), greater <int>());
        
        cout << ans[0] << endl;
    }

    return 0;
}