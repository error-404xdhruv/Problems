#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l t;
    cin >> t ;
    while (t--)
    {
        l n ;
        cin >> n ;
        vl s(n), f(n) ;
        for (l i = 0; i < n; i++)
        {
            cin >> s[i] ;
        }
        for (l i = 0; i < n; i++)
        {
            cin >> f[i] ;
        }
        cout << f[0]-s[0] << " " ;
        for (l i = 1; i < n; i++)
        {
            if (s[i] > f[i-1])
            {
                cout << f[i]-s[i] << " " ;
            }
            else
            {
                cout << f[i]-f[i-1] << " " ;
            }
            
        }
        cout << endl ;
    }
    

    return 0;
}