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
    vi pages(n + 1);
    pages[0] = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> pages[i];
    }
    int i = 1;
    while (n > 0)
    {
        if (i == 8)
        {
            i = 1;
        }
        n -= pages[i];
        i++;
    }
    cout << i - 1 << endl;

    return 0;
}