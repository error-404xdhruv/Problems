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
    int sum = 0, count_even(0), count_odd(0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if ((temp & 1))
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
        sum += temp;
    }
    if ((sum & 1))
    {
        cout << count_odd << endl;
    }
    else
    {
        cout << count_even << endl;
    }

    return 0;
}