#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    l t ;
    cin >> t ;
    while (t--)
    {
        l w, x, y, z ;
        cin >> w >> x >> y >> z ;
        l n = w+(y*z) ;
        if (x==n)
        {
            cout << "filled" << endl ;
        }
        else if (n<x)
        {
            cout << "unfilled" << endl ;
        }
        else
        {
            cout << "overflow" << endl ;
        }
        
        
    }
    

    return 0;
}