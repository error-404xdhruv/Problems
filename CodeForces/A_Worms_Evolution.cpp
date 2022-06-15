#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] == v[j] + v[k])
                {
                    cout << i+1 << " " << j+1 << " " << k+1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;

    return 0;
}