#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        long int way1, way2 ;
        long int a, b, m ;
        cin >> a >> b >> m ;
        if (b>a)
        {
            way1 = b-a ;
            way2 = (m-b)+a ;
            if (way1<=way2)
            {
                cout << way1 << endl ;
            }
            else
            {
                cout << way2 << endl ;
            }
        }
        else if (a>b)
        {
            way1 = a-b ;
            way2 = (m-a)+b ;
            if (way1<=way2)
            {
                cout << way1 << endl ;
            }
            else
            {
                cout << way2 << endl ;
            }
            
        }
        
        
    }
    
    return 0 ;
}