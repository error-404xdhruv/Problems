#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min((n - a), (b + 1)) << endl;

    return 0;
}