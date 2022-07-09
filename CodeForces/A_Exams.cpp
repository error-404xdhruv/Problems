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
    int n, k;
    cin >> n >> k;
    (k <= n * 3) ? cout << n * 3 - k : cout << 0;
    cout << endl;

    return 0;
}