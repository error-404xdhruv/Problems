#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        vl v(4);
        cin >> v[0];
        int count = 0;
        for (int i = 1; i < 4; i++)
        {
            cin >> v[i];
            if (v[i] > v[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}