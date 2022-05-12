#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long int arr[50];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long int newN = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            newN = min(newN, arr[i]);
        }
        long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (arr[i] - newN);
        }
        cout << ans << endl;
    }

    return 0;
}