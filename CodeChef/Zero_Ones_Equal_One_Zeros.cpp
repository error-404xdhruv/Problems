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
        int n;
        cin >> n;
        if ((n & 1) == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if ((i & 1) == 1)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }
        else
        {
            cout << 1;
            for (int i = 2; i <= n - 1; i++)
            {
                cout << 0;
            }
            cout << 1;
        }
        cout << endl; 
    }

    return 0;
}