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
        cin >> n ;
        if (n%2 == 1 || n<4)
        {
            cout << -1 << endl ;
        }
        else
        {
            l max = n/4 ;
            l min ;
            if (n%6==2 || n%6==4)
            {
                min = n/6+1 ;
            }          
            else
            {
                min = n/6 ;
            }
            cout << min << " " << max << endl ;
        }
    }
    
    return 0;
}