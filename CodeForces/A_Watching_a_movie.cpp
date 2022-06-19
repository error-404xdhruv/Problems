#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        time += (v[i].second - v[i].first) + 1;
        if (i > 0)
        {
            time += (v[i].first - (v[i - 1].second + 1)) % x;
        }
    }
    time += (v[0].first - 1) % x;

    cout << time << endl;

    return 0;
}