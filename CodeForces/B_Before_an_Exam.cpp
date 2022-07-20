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
    int d, sumTime;
    cin >> d >> sumTime;
    int mini[d], maxi[d];
    int sumMin(0), sumMax(0);
    for (int i = 0; i < d; i++)
    {
        cin >> mini[i] >> maxi[i];
        sumMin += mini[i];
        sumMax += maxi[i];
    }
    if (sumMin <= sumTime and sumMax >= sumTime)
    {
        cout << "YES" << endl;
        for (int i = 0; i < d; i++)
        {
            int spent = min(mini[i] + sumTime - sumMin, maxi[i]);
            if (i + 1 < d)
            {
                cout << spent << " ";
            }
            else
            {
                cout << spent << endl;
            }
            sumTime -= (spent - mini[i]);
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}