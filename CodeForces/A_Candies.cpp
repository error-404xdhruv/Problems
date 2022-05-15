#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    l t ;
    cin >> t ;
    
    while (t--)
    {
        l n ;
        l x ;
        cin >> n ;
        l temp ;
        for (l k=2; n%temp!=0; k++)
        {
            temp = pow(2, k)-1 ;
        }
        x = n/temp ;
        cout << x << endl ;
    }
    
    return 0;
}