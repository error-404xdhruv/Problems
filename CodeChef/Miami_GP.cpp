#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y ;
        cin >> x >> y ;
        float prob = (1.07)*x ;
        // cout << prob << endl ;
        if (y<=prob)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }          
    }
    return 0;
}