#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n, z;
        cin >> n >> z;
        vl v(n), ans;
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
            ans.push_back((v[i] | z));
        }
        cout << *max_element(ans.begin(), ans.end()) << endl;
    }

    return 0;
}