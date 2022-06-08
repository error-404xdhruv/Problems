#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (l i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    // since the time is given in chronological order, no need to sort
    l count = 1;
    vl countStore;
    for (l i = 1; i < n; i++)
    {
        if (v[i].first == v[i - 1].first)
        {
            if (v[i].second == v[i - 1].second)
            {
                count++;
            }
            else
            {
                countStore.push_back(count);
                count = 1;
            }
        }
        else
        {
            countStore.push_back(count);
            count = 1;
        }
    }
    // for last element
    countStore.push_back(count);
    cout << *max_element(countStore.begin(), countStore.end()) << endl;

    return 0;
}