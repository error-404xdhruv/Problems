#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int min = (n / 2) + (n % 2), max = n / 1;
    int count = -1;
    for (int i = min; i <= max; i++)
    {
        if (i % m == 0)
        {
            count = i;
            break;
        }
    }
    cout << count << endl;

    return 0;
}