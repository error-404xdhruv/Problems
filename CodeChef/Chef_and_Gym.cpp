#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int x, y, z ;
        cin >> x >> y >> z ;
        if (z<x)
        {
            cout << 0 << endl ;
        }
        else if (z >= x)
        {
            if (z>=x+y)
            {
                cout << 2 << endl ;
            }
            else
            {
                cout << 1 << endl ;
            }
            
        }
        
    }
    

    return 0;
}