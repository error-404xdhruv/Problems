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
        l n;
        cin >> n;
        vl v(n), id;
        map<l, l> m;
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
            id.push_back(i+1) ;
        }
        bool flag = true;
        for (l i = 0; i < n; i++)
        {
            if (m[v[i]] == 1)
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            for (l i = 0; i < n-1; i++)
            {
                if (v[i]==v[i+1])
                {
                    swap(id[i], id[i+1]) ;
                }
            }
            for (l i = 0; i < id.size(); i++)
            {
                cout << id[i] << " " ;
            }
            cout << "\n" ;
        }
    }

    return 0;
}