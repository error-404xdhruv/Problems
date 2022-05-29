#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l t ;
    cin>> t ;
    while (t--)
    {
        l a, b, c, x, y ;
        cin >> a >> b >> c >> x >> y;
        if (a >= x && b >= y)
        {
            cout << "YES" << endl ;
        }
        else if (a >= x && b < y)
        {
            if (c >= (y-b))
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
        else if (a <x && b >= y)
        {
            if (c >= (x-a))
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
        else if (a <x && b <y)
        {
            if (c >= (x-a)+(y-b))
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ; 
            }
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    
    return 0;
}