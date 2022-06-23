#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>>
#define m 1000000007
using namespace std ;

int main()
{
    vl v ;
    l k = 1 ;
    int i = 1 ;
    int x = 1 ;
    while (i <= 1000000)
    {
        v.push_back(x) ;
        x *= 2 ;
        x %= m ;
        i++ ;
    }
    
    l t; cin >> t;
    while (t--)
    {
        l n, x ; cin >> n >> x ;
        if (n <= 2)
        {
            cout << n*x << endl ;
        }
        else
        {
            cout << ((x * (v[n - 1])) % 1000000007) << endl ;
        }
        
    }

    return 0;
}