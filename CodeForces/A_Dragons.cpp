#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s <= v[i].first)
        {
            cout << "NO" << endl;
            flag = false;
            break;
        }
        else
        {
            s += v[i].second;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }

    return 0;
}