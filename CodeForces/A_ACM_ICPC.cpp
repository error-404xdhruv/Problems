#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    vi v(6);
    int sum = 0, n = 6;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if ((sum&1))
    {
        cout << "NO" << endl ;
        return 0 ;
    }
    
    sum /= 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((i != j) and (j != k) and (i != k))
                {
                    if (v[i] + v[j] + v[k] == sum)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}