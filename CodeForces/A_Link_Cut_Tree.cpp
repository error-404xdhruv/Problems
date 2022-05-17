#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    l s, e, k;
    cin >> s >> e >> k;
    vector<long long int> ans;
    for (l i = 0; pow(k, i) <= e; i++)
    {
        if (pow(k, i) >= s && pow(k, i) <= e)
        {
            ans.push_back(pow(k, i));
        }
    }
    if (ans.size() == 0)
    {
        cout << -1;
    }
    else
    {
        for (l i = 0; i < ans.size(); i++)
        {
            cout << ans.at(i) << " ";
        }
    }

    cout << endl;

    return 0;
}