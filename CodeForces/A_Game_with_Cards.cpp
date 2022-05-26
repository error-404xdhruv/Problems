#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi alice;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            alice.push_back(j);
        }
        int m;
        cin >> m;
        vi bob;
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            bob.push_back(k);
        }
        sort(alice.begin(), alice.end());
        sort(bob.begin(), bob.end());
        {
            if (alice[n - 1] >= bob[m - 1])
            {
                cout << "Alice"
                     << "\n";
            }
            else
            {
                cout << "Bob"
                     << "\n";
            }
        }

        {
            if (bob[m - 1] >= alice[n - 1])
            {
                cout << "Bob"
                     << "\n";
            }
            else
            {
                cout << "Alice"
                     << "\n";
            }
        }
        /* for (int i = 0; i < 2; i++)
        {
            if (i==0)
            {
                if (alice[n-1]>=bob[n-1])
                {
                    cout << "Alice" << endl ;
                }
                else
                {
                    cout << "Bob" << endl ;
                }
            }
            if (i==1)
            {
                if (bob[n-1]>=alice[n-1])
                {
                    cout << "Bob" << endl ;
                }
                else
                {
                    cout << "Alice" << endl ;
                }

            }

        } */
    }

    return 0;
}