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
        int n;
        cin >> n;
        vl v(n);
        int id = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < v[id])
            {
                id = i;
            }
        }
        if ((n & 1))
        {
            cout << "Mike" << endl;
        }
        else
        {
            if ((id & 1))
            {
                cout << "Mike" << endl;
            }
            else
            {
                cout << "Joe" << endl;
            }
        }
    }

    return 0;
}