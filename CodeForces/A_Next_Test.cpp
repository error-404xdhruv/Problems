#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int n ; cin >> n ;
    vi v(n) ;
    map <int, int> m ;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i] ;
        m[v[i]]++ ;
    }
    
    for (int i = 1; ; i++)
    {
        if (m[i]==0)
        {
            cout << i << endl ;
            break ;
        }
        
    }
    
    

    return 0;
}