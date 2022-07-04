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
    int temp = *min_element(v.begin(), v.end());
    vi pos;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == temp)
        {
            pos.push_back(i);
        }
    }
    if (pos.size() > 1)
    {
        cout << "Still Rozdil" << endl;
    }
    else
    {
        cout << pos[0] + 1 << endl;
    }

    return 0;
}