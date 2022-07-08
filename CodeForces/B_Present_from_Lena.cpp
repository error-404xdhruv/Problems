#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    IOS;
    int n;
    cin >> n;
    for (int i = -n; i <= n; i++)
    {
        int max = n - abs(i);
        for (int j = 0; j < abs(i); j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < max; j++)
        {
            cout << j << " ";
        }

        for (int i = max; i > 0; i--)
        {
            cout << i << " ";
        }

        cout << 0 << endl;
    }

    return 0;
}

// what we learnt : when the number is equal to 2*n+1 something then take numbers like -n to +n